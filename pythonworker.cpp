#include "pythonworker.h"

// Python工作线程实现
PythonWorker::PythonWorker(QObject *parent) : QThread(parent)
{
}

void PythonWorker::setScriptPath(const QString &path)
{
    m_scriptPath = path;
}

void PythonWorker::redirectPythonOutputToConsole()
{
    // 创建或附加控制台
    if (!AttachConsole(ATTACH_PARENT_PROCESS)) {
        AllocConsole();
    }

    // 获取控制台句柄
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // 创建与Python输出关联的文件对象
    PyObject* sys = PyImport_ImportModule("sys");
    PyObject* io = PyImport_ImportModule("io");

    // 创建控制台输出对象
    PyObject* consoleOut = PyObject_CallMethod(io, "open", "ss", "CONOUT$", "w");

    if (consoleOut) {
        // 设置Python的标准输出和错误输出
        PyObject_SetAttrString(sys, "stdout", consoleOut);
        PyObject_SetAttrString(sys, "stderr", consoleOut);
        Py_DECREF(consoleOut);
    }

    Py_DECREF(io);
    Py_DECREF(sys);

    // 设置控制台编码为UTF-8
    SetConsoleOutputCP(CP_UTF8);
}

void PythonWorker::run()
{
    // 初始化Python解释器
    Py_Initialize();

    // 重定向Python输出
    redirectPythonOutputToConsole();


    // 获取脚本所在目录（关键步骤）
    QFileInfo scriptFile(m_scriptPath);
    QString scriptDir = scriptFile.absolutePath();

    // 构建Python命令：切换到脚本所在目录
    QString changeDirCmd = QString(
                               "import os\n"
                               "script_dir = r'%1'\n"  // 使用原始字符串避免转义问题
                               "os.chdir(script_dir)\n"
                               "print(f'工作目录已切换到: {os.getcwd()}')\n"  // 调试信息
                               ).arg(scriptDir.replace("'", "\\'"));  // 转义路径中的单引号

    // 执行切换目录的命令
    PyRun_SimpleString(changeDirCmd.toUtf8().constData());

    // 添加脚本目录到Python路径（解决导入问题）
    QString addPathCmd = QString(
                             "import sys\n"
                             "sys.path.insert(0, r'%1')\n"
                             "print(f'Python路径已添加: {sys.path}')\n"  // 调试信息
                             ).arg(scriptDir.replace("'", "\\'"));

    PyRun_SimpleString(addPathCmd.toUtf8().constData());

    // // 设置当前工作目录
    // // 使用QDir处理路径（跨平台安全）
    // QDir scriptDir = QFileInfo(m_scriptPath).absoluteDir();
    // QString nativePath = QDir::toNativeSeparators(scriptDir.absolutePath());

    // qDebug() << scriptDir << nativePath;

    // // 在Python命令中使用
    // QString changeDirCmd = QString(
    //                            "import os\n"
    //                            "os.chdir(r'%1')\n"
    //                            ).arg(nativePath.replace("'", "\\'"));

    // // 执行切换目录的命令
    // PyRun_SimpleString(changeDirCmd.toUtf8().constData());

    // QProcess process;

    // // 设置工作目录为 "D:/myproject"
    // QDir scriptDir = QFileInfo(m_scriptPath).absoluteDir();
    // QString workingDirectory = "C:/Users/BotSystem/Desktop/pythonTest/ardusub_control";
    // process.setWorkingDirectory(workingDirectory);

    // // 启动进程
    // process.start("some_command", QStringList() << "arg1" << "arg2");

    // QDir::setCurrent("C:/Users/BotSystem/Desktop/pythonTest/ardusub_control");

    // 打开并执行Python文件
    FILE* file = fopen(m_scriptPath.toUtf8().constData(), "r");
    if (!file) {
        emit errorOccurred("无法打开Python脚本: " + m_scriptPath);
        Py_Finalize();
        return;
    }

    // 执行脚本
    PyRun_SimpleFile(file, m_scriptPath.toUtf8().constData());
    fclose(file);

    // 检查错误
    if (PyErr_Occurred()) {
        PyErr_Print();
        emit errorOccurred("Python脚本执行出错");
    }

    // 清理Python解释器
    Py_Finalize();

    // QDir::setCurrent("C:/Users/BotSystem/Desktop/pythonTest/build/Desktop_Qt_5_15_2_MSVC2019_64bit-Release/release");

    // 通知完成
    emit scriptFinished();


}

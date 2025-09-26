#include "mavlinkcommunicator.h"

MavlinkCommunicator::MavlinkCommunicator(QObject *parent)
    : QObject{parent}
{}

void MavlinkCommunicator::register_temp_message_handler(MessageHandler handler) {
    QMutexLocker locker(&handlers_mutex);
    temp_message_handlers.append(handler);
}

void MavlinkCommunicator::unregister_temp_message_handler(MessageHandler handler) {
    QMutexLocker locker(&handlers_mutex);
    // temp_message_handlers.removeAll(handler);
    for (int i = temp_message_handlers.size() - 1; i >= 0; --i) {

        temp_message_handlers.removeAt(i);
    }
}

void MavlinkCommunicator::handle_mavlink_message(const mavlink_message_t* msg) {
    QMutexLocker locker(&handlers_mutex);

    // 调用所有注册的临时处理器
    for (const auto& handler : temp_message_handlers) {
        if (handler) {
            handler(msg);
        }
    }

    // 常规消息处理逻辑...
    switch (msg->msgid) {
    case MAVLINK_MSG_ID_HEARTBEAT:
        // 处理心跳包...
        break;
        // 其他消息处理...
    }
}

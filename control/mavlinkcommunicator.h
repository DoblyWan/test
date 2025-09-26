#ifndef MAVLINKCOMMUNICATOR_H
#define MAVLINKCOMMUNICATOR_H

#include <QObject>
#include <QList>
#include <QMutex>
#include "mavlink.h"

class MavlinkCommunicator : public QObject
{
    Q_OBJECT
public:
    explicit MavlinkCommunicator(QObject *parent = nullptr);

    // 消息处理器类型定义
    using MessageHandler = std::function<void(const mavlink_message_t*)>;

    // 构造函数等...

    /**
     * @brief 注册临时消息处理器
     * @param handler 消息处理回调函数
     */
    void register_temp_message_handler(MessageHandler handler);

    /**
     * @brief 注销临时消息处理器
     * @param handler 要移除的消息处理器
     */
    void unregister_temp_message_handler(MessageHandler handler);

    /**
     * @brief 主消息处理函数
     * @param msg 接收到的MAVLink消息
     */
    void handle_mavlink_message(const mavlink_message_t* msg);

private:
    QList<MessageHandler> temp_message_handlers;
    QMutex handlers_mutex; // 线程安全保护

signals:
};

#endif // MAVLINKCOMMUNICATOR_H

//
// Created by luoc on 2019-01-08.
//

#ifndef _SOCKET_CLIENT_H
#define _SOCKET_CLIENT_H

// 初始化SOCKET
int socket_client_init(void **handle);

// 发送消息
int socket_client_sent(void *handle, unsigned char *buf, int buf_len);

// 接受消息
int socket_client_recv(void *handle, unsigned char *buf, int buf_len);

// 结束进程
int destory_socket(void *handle);

#endif //INC_1_SOCKET_H

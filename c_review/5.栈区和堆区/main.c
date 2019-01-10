#include <stdio.h>
#include <stdlib.h>
/**
 * 栈： 记得画图
 *  先进后出
 *  栈区不是栈，是一种内存，只不过存放数据的方式，是用栈的方式。
 *  栈是一种数据结构
 *  是由操作系统分配和回收
 *      速度很快
 *      栈的资源少
 */

void test() {
    // 局部变量 在栈上开辟内存空间 是由操作系统自动在栈上开辟的
    //
    int a = 10;
    int b = 20;
    int arr[10];    // 内存小的话考虑在栈上开辟。

    {
        int c;
        int d;
    }
}

/**
 * 全局区
 *  静态区
 *      global 全局变量(C代码中不要用全局变量，多线程的时候，很危险。)
 *      static 静态的 局部/全局变量
 *  常量区
 *      "123456" 只读的变量
 */
int g_a;
char * str = "123456";  // "123456"存在常量区 假设首地址为0xaabbccdd

/**
 * 堆区： 记得画图
 *  由程序员分配和释放
 *  特点
 *      空间大
 *      不是由操作系统开辟和回收，是由程序员用户自己
 *      维护成本高
 *      适用于 容量大 管理方式比较单一的数据。
 *
 */

void test2() {
    char *p = NULL;     // NULL 为0x00000000
    char *str = "123456";
    p = (char *) malloc(100);   // 在堆上开辟空间，将首地址赋值给p

    // 释放堆的空间
    if (p == NULL) {    // 配合NULL空指针使用，防止野指针
        fprintf(stderr, "malloc error");
        return;
    }

    static int b = 20;  // 静态 放在全局区

    if (p != NULL) {
        free(p);
        p == NULL;
    }

}

int main() {
    return 0;
}
#include <stdio.h>

/**
 * 1.数据类型的本质：固定内存大小的 别名
 *
 * 2.数据类型大小计算 （sizeof）
 *
 * 3.可以给已存在的数据类型起别名（typedef）
 *
 * 4.数据封装的概念: void* 万能类型
 *
 * @return
 */

int main(void) {
    // 数据类型
    int a = 10; // int 就是告诉编译器，开辟4个字节大小的内存块。
    double b = 1.30;    // double 开辟8个字节大小的内存块
    printf("Hello, World!\n");
    return 0;
}
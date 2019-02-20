#include <stdio.h>
/**
 * 变量的本质：一块儿连续的内存别名。
 *
 * 通过变量，往内存读写数据；
 *
 * 修改变量：
 *      直接修改
 *      间接修改
 *
 * @return
 */


int main() {
    int a = 10;

    // 通过指针间接修改
    int *p = &a;
    *p = 20;
    printf("a = %d \n", a);

    // 通过内存编号操作内存(通过强转，将地址编号强转指针)
    printf("&a: %p \n", &a);    //-358483464
    int addr = 0;
    addr = (int)&a;
    // (int*) 0xaabbcc11 告诉变量a首地址偏移4个字节，找到匹配的内存块儿a；
    *((int*)addr) = 100;
    printf("a = %d \n", a);
    printf("&a = %p \n", &a);
    return 0;
}
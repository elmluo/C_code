#include <stdio.h>
#include <string.h>

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
    int a = 11; // int 就是告诉编译器，开辟4个字节大小的内存块。
    double b = 3.33;    // double 开辟8个字节大小的内存块。
    char c = 'c';       // char 开辟1个字节大小的内存块。
    printf("sizeof(a)=%d \n", sizeof(a));   // 求int数据类型的大小  4
    printf("sizeof(b)=%d \n", sizeof(b));   // 求double数据类型的大小   8
    printf("sizeof(c)=%d \n", sizeof(c));   // 求char数据类型的大小 1

    int *p = &a;    // p是一个指针，指向a的地址。
    char *ptr = &c; // ptr是一个指针，指向c的地址
    printf("sizeof(p)=%d \n", sizeof(p));   // 求int * 指针数据类型的大小(只要是指针数据类型，大小都相同，64位操作系统为8)，
    printf("sizeof(*p)=%d \n", sizeof(*p));  // 求int数据类型的大小 4
    printf("sizeof(ptr)=%d \n", sizeof(ptr));     // 求char * 指针类型的大小 8
    printf("sizeof(*ptr)=%d \n", sizeof(*ptr));     // 求char数据类型的大小 1
    printf("p : %p, p + 1: %p \n", p, p + 1);   // 指针的数据类型，由指针的跨度决定
    printf("ptr : %p, ptr + 1: %p \n", ptr, ptr + 1);

    ++p;
    *p = 50;
    printf("p: %p \n", p);

    int arr[5] = {1, 2};  // 定义一个数组。
    printf("sizeof(arr)=%d \n", sizeof(arr));   // 求int arr[10] 数据类型的大小
    printf("sizeof(arr[0])=%d \n", sizeof(arr[0])); // 求int数据类型的大小

    printf("arr: %p \n", arr);  // 数组名arr，是首元素地址，首元素是int类型，arr的数据类型是int*, + 1 的跨度为4个字节
    printf("arr + 1: %p \n", arr + 1);
    printf("&arr: %p \n", &arr);
    printf("&arr + 1: %p \n", &arr + 1);

    return 0;
}
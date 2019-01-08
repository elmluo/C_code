#include <stdio.h>

// 函数声明
// 当数组作为参数传递的时候，编译器其实就是拿了数组指针.
int printArray(int array[], int len);   // 这样方便读者阅读
//int printArr(int *array, int len);

int sortArray(int array[], int len);

int main() {
    int arr[] = {1, 22, 3, 34, 55, 66, 77, 88, 23};
    int len = sizeof(arr) / sizeof(arr[0]);
    sortArray(arr, len);
    printArray(arr, len);
    return 0;
}


/**
 * 打印数组
 * @param array 数组作为参数有一个退化的问题, 退化为一个指针。
 * @param len
 * @return
 */
int printArray(int array[], int len) {
    int i;
    for (i = 0; i < len; ++i) {
        printf("%d,", array[i]);
    }
    printf("\n");
    printf("len = %d\n", len);

    // 从编译器的角度考虑，将传入的array退化成一个指针,
    // 64位操作系统，指针占内存空间大小都是8个字节
    printf("size of &len = %d \n", sizeof(&len));
    printf("size of array = %d \n", sizeof(array));     // 编译器已经将array，退化为一个指针 sizeof 任何类型指针 64位操作系统默认都是8。
    printf("size of *array = %d \n", sizeof(*array));   // 默认指向数组的第一位
    printf("size of &array = %d \n", sizeof(&array));

    return 0;
}

/**
 * 对数组的简单排序
 * @param array
 * @param len
 * @return
 */
int sortArray(int array[], int len) {
    int temp = 0;
    // 当i=0位置的时候，让j从0到n进行便利，找到一个最小值
    // 按住i不放， j将通过内层逐级遍历
    for (int i = 0; i < len; ++i) {
        for (int j = i; j < len; ++j) {
            if (array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    return 0;
}
#include <stdio.h>
#include <limits.h>
#include <float.h>

// 变量声明
extern int a, b;
extern int c;
extern float f;

int main(int argc, char const *argv[])
{
    printf("hello world!\n");
    // printf("float 存储最大字节数 : %d \n", sizeof(float));
   	printf("float 最小值: %E\n", FLT_MIN );
   	printf("float 最大值: %E\n", FLT_MAX );
   	printf("精度值: %d\n", FLT_DIG );

   	// 变量的定义
   	int a, b;
   	int c;
   	float f;

 	// 初始化
   	a = 10;
   	b = 20;
   	c = a + b;
   	printf("value of c: %d\n", c);

   	f = 70.0/3.0;
   	printf("value of f: %f\n", f);
    return 0;
}
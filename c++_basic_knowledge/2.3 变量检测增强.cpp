/*
在C语言中，重复定义多个同名变量是合法的
在C++中，不允许多个同名的全局变量

C语言中，多个同名变量最终会被连接到，全局数据区的同一个地址空间上
int g_var;
int g_var = 1;
C++直接拒绝这种二义性的做法
 */

#include <iostream>
using namespace std;

int g_var;
int g_var = 1;
//=> error: redefine g_var

int main(int argc, char const *argv[])
{
	printf("g_var = \n", g_var);
	return 0;
}

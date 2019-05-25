#include <iostream>

using namespace std;

/*
1. 编译器并不是把函数模板处理成能够处理任意类的函数。
2. 编译器从函数模板通过具体类型产生不同的函数。
3. 编译器会对函数模板进行 两次编译，在声明的地方对模板代码本身进行编译(词法分析，如果语法分析没有问题，就可以继续进行)。
4
 */

/*

hello.c 源程序（文本）
	⬇️
	预处理器(cpp)
	⬇️
hello.i 被修改的源程序 (文本)
	⬇️
	编译器（ccl）
	⬇️
hello.s
	⬇️
	汇编器 (as)
	⬇️
hello.o 可重定位目标程序(二进制)  <-- print.o
	⬇️
	连接器(ld)
	⬇️
hello 可执行目标程序(二进制)

 */

/*
g++ -E hello.c -o hello.i (预处理)
g++ -S hello.i -o hello.s (编译)
g++ -c hello.s -o hello.o (汇编)
g++ hello.o -o hello (连接)

以上四个步骤, 可以合成一个步骤
g++ hello.c -o hello （直接编译连接成可执行的目标文件）
 */

template <typename T>
void myswap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

/*
// 通过编译器的第二次编译给我们生成的两个模板函数的重载

void myswap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void myswap(char &a, char &b)
{
	char temp = a;
	a = b;
	b = temp;
}
*/

// 通过汇编， g++ -S ***.cpp -o ***.s 
// 编译器只给我们生成int 和 char 的模板函数的实现体 并没有生成全部的实现体。

int main(int argc, char const *argv[])
{
	int a = 1;
	int b = 2; 
	// 第二次编译 根据模板函数的调用来生成具体的模板
	// 而不是所有的数据类型都生成
	swap<int>(a, b);
	cout << "a: " << a << ", b: " << b << endl;

	char x = 'x';
	char y = 'y';
	swap<char>(x, y);
	cout << "x: " << x << ", y: " << y << endl;
	return 0;
}


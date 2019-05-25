#include <iostream>
#include "7.3.3 Complex.h"
#include "7.3.3 Complex.hpp"

using namespace std;

/*
由于二次编译，模板类在.h在第一次编译后，并没有最终确定类的具体实现，只是编译的词法
在第二次确定类的具体实现后，是在.hpp文件生成的最有工具类，所以main函数需要引入.hpp文件。
综上: 引入hpp文件一说明的是曲线救国之际，所以实现模板方法建议在同一文件.h中完成
 */

int main(int argc, char const *argv[])
{
	Complex<int> a(10, 20); // 让模板类具体化是为了告诉编译具体的⼤⼩，分配内存
	Complex<int> b(3, 4);
	a.printComplex();

	Complex<int> c;
	c = a + b; // Complex c.operator+(Complex &another)
	c.printComplex();
	cout << c << endl;
	c = mySub(a, b);
	cout << c << endl;

	return 0;

}
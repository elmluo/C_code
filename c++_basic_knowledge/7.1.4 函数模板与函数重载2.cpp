#include <iostream>

using namespace std;


/**
 * 1. 当函数模板和普通函数都符合调用的时候， 优先选择普通函数
 * 2. 若显示使用函数模板， 则使用<> 类型列表
 * 3. 如果函数模板产生更好的匹配 使用函数模板
 * 
 * @param  a [description]
 * @param  b [description]
 * @return   [description]
 */
int Max(int a , int b)
{
	cout << "int Max(int a, int b)" << endl;
	return a > b ? a : b;
}

template<class T>
T Max(T a, T b)
{
	cout << "T Max(T a, T b)" << endl;
	return a > b ? a : b;
}

template<typename T>
T Max(T a,  T b, T c)
{
	cout << "T Max(T a, T b, T c)" << endl;
	return Max(Max(a, b), c);
}

int main(int argc, char const *argv[])
{
	int a = 1;
	int b = 2;
	cout << Max(a, b) << endl;	// 当模板函数和普通函数都符合调用的时候，有限选择普通函数

	cout << Max<>(a, b) << endl;	// 如果使用函数模板， 则使用<> 类型列表。

	cout << Max(3.0, 4.0) << endl;	// 如果 函数模板产生更好的匹配 使用函数模板

	cout << Max(5.0, 6.0, 7.0) << endl; // 重载

	cout << Max('a', 100) << endl;	// 普通函数可以进行隐式类型转换，函数模板不行

	return 0;
}
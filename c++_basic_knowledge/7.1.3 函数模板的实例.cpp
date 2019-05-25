#include <iostream>
using namespace std;
/**
 * 1. 调用过程是先将函数模板实例化为函数，然后再发生函数调用
 * 2. 只适用于函数参数相同， 类型不同， 且函数体相同的情况。
 * 3. 如果个数不同，则不能使用模板函数
 */
template<typename T>
void myswap(T &a, T &b)
{
	T t = a;
	a = b;
	b = t;
}

int main(void)
{
	int x = 1;
	int y = 2;

	myswap(x, y);
	cout << "x: " << x << ", y: " << y << endl;
	myswap(x, y);
	cout << "x: " << x << ", y: " << y << endl;

	char a = 'a';
	char b = 'b';
	myswap(a, b);
	cout << "a: " << a << ", b: " << b << endl;
	myswap(a, b);
	cout << "a: " << a << ", b: " << b << endl;
	return 0;
}
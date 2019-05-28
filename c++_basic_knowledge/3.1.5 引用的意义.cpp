/*
1 引用作为其变量的别名而存在，因此在一些场合可以代替指针
2 引用相对于指针来说，具有更好的可读性和实用性
 */

/*
void swap(int a, int b)	// 无法实现两数据的交换
void swap(int *p, int *q)	// 开辟了指针空间实现交换

 */

/*
c++ 中引入引用后，可以用引用解决的问题。避免实用指针来解决。
 */

#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
	int tmp;
	tmp = a; a = b;
	b = tmp;
}

int main(int argc, char const *argv[])
{
	int a = 3, b = 5;
	cout << "a = " << a << "; b = " << b << endl;

	swap(a, b);
	cout << "a = " << a << "; b = " << b << endl;

	return 0;
}

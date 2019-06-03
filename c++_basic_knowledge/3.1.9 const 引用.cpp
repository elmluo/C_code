/*
const 引用有较多的使用。它可以防止对象的值被随意的修改。因此具有一些特性。

	1 const 对象的引用必须是const的,将普通引用绑定到const对象是不合法的
		这个原因比较简单。既然对象是const的, 表示不能被修改，引用当然也不能被修改,
		必须使用const引用。实际上，
			const int a = 1;
			int &b = a;
		这种写法是不合格的, 编译不过。

	2. const 引用可使用相关类型的对象（常量, 非同类型的变量或表达式）初始化。
		这个是const 引用于普通引用最大的区别。
			const int &a = 2;
			是合法的
			double x = 3.14;
			const int &b = a;
			也是合法的
 */

#include <iostream>
using namespace std;

int main(void)
{
	// 普通引用
	int a = 10;
	int &b = a;

	cout << "b = " << b << endl;

	// 常引用
	int x = 20;
	const int &y = x;	// 常引用是限制变量为只读 不能通过y去修改x了
	// y = 21;	// error

	return 0;
}



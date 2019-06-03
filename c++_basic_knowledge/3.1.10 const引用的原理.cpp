/*
const引用的目的是,禁止通过修改引用值来改变被引用的对象。
const引用的 初始化特性较为微妙，可通过如下代码说明:
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	double val = 3.14;

	// 引用ref是const的，在初始化的时候已经给定值，不允许修改。 val的修改不会影响ref。

	// 实际上如同
	// int temp = val;
	// const int &ref = temp;
	const int &ref = val;

	// 引用ref2是非const的, 可以修改，val的修改会影响ref2。
	double &ref2 = val;

	cout << ref << " " << ref2 << endl;
	//=> 3 3,14

	val = 4.14;

	cout << ref << " " << ref2 <<  endl;
	//=> 3 4.14
	return 0;
}

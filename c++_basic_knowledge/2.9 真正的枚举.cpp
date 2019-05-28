/*
C语言中枚举本质就是整型，枚举变量可以用任意整型赋值。
C++中的枚举变量，只能用被枚举出来的元素初始化
 */

#include <iostream>
using namespace std;

enum eason {SPR, SUM, AUT, WIN};

int main(int argc, char const *argv[])
{
	enum season s = SPR;
	// s = 0; // error, 但是C语言是可以通过
	s = SUM;
	cout << "s=" << s << endl; // 1
	return 0;
}
#include <iostream>
using namespace std;

// c语言中的变量都必须在作用域开始的位置定义
// c++ 中更加强调语言的“实用性”,所有变量都可以在需要使用的时候再定义

int main(int argc, char const *argv[])
{
	int i= 0;
	cout << "i=" << i <<endl;

	int k;
	k = 4;
	cout << "k=" << k << endl;
	
	return 0;
}

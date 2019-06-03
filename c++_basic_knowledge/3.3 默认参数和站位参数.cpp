#include <iostream>
using namespace std;

#if 0
通常情况下函数调用时，形参从实参那里取值。
对于多次调用函数同一实参时，C++给出了更简单的处理办法。
	给形参以默认值，这样就不用从实参那里取值了。
#endif

// 1 若 你填写参数，使用你填写的，不填写的默认
void myPrint(int x = 3)
{
	cout << "x: " << x << endl;
}


int main(int argc, char const *argv[])
{
	myPrint();
	return 0;
}

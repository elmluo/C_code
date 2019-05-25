#include <iostream>
using namespace std;

template <class T>
void myswap(T &a, T &b)
{
	T t;
	t = a;
	a = b;
	b = t;
	cout << "myswap 函数模板do" << endl;
}

void myswap(char &a , int &b)
{
	int t;
	t = a;
	a = b;
	b = t;
	cout << "myswap 普通函数do" << endl;
}

int main()
{
	char cData = 'a';
	int iData = 2;
	myswap(cData, iData);
	// myswap(iData, cData);
	//=> 普通函数会进行，隐式数据类型转化
	

	// myswap<int>(cData, iData);
	//=> 函数模板不提供隐式的数据类型转化 必须是严格的匹配
	
	return 0;
}

#include <iostream>
using namespace std;
template<typename T>	// 定义类模板 要在类的头部之前加入template<typename T> 或者 template<class T>
// template<class T>
class A
{

public:
	A(T t)
	{
		this->t = t;
	}

	T &getT()
	{
		return t;
	}

public:
	T t;
	
};

int main(void)
{
	// 在定义一个对象的时候， 要明确此类所泛化具体类型
	A<int> a(100);
	cout << a.getT() << endl;
	return 0;
}


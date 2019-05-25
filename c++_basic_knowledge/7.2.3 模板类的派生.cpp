#include <iostream>
using namespace std;

template<class T>
class A 
{

public:
	A(T t)
	{
		this->a = t;
	}
	void printA()
	{
		cout << "a: "<< this->a << endl;
	}
protected:
	T a;

};

// 模板类派生普通类
// 结论： 子类从模板类继承的时候， 需要让编译器知道 父类的数据类型具体是什么（数据类型的本质， 固定内存大小的别名）

class B : public A<int>
{
public:
	B(int a, int b) : A<int>(a)
	{
		this->b = b;
	}

	void printB()
	{
		cout << "b: " << b << endl;
	}
private:
	int b;
};

// 模板类派生模板类
template <class T>
class C : public A<T>
{
public:
	C(T a, T c): A<T>(a)
	{
		this->c = c;
	}
	void printC()
	{
		cout << "C: " << c << endl;
	}
private:
	T c;
};

int main(int argc, char const *argv[])
{
	A<int> a(100);
	a.printA(); 
	return 0;
}





#include <iostream>
using namespace std;

/*

1. 类模板和函数模板的定义和使用类似
2. 有时候，有两个或者多个类，其功能是相同的
3. 仅仅是数据类型不同, 所以将类中的类型进行泛化

template<type name T>
class A {

}
*/


/*
// 普通类
class A
{
public:
	A(int a)
	{
		this->a = a;
	}
	void printA()
	{
		cout << "a= " << a << endl;
	}
private:
	int a;
}
*/


/*

// 普通类实例作为参数传递
void func(A & a){

}

 */

// 模板类，将上面的int 都替换成T泛化
template<typename T>
class A
{
public:
	A(T a)
	{
		this->a = a;
	}
	void printA()
	{
		cout << "a = " << a <<endl;
	}
private:
	T a;
};

// 继承已经实例化的模板类
// B类此时是一个普通类
class B : public A<int>
{
public:
	B(int a, int b) : A<int>(a)	// 由于A已经在上面int实例了，所以这里A加不加<int> 都无所谓
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

// C类继承的是一个模板类，没有实例化，此时C类依然是一个模板类
// 编译器在处理C类的时候需要二次编译
template <class T>
class C : public A<T>
{
public:
	C(T a, T c) : A<T>(a)
	{
		this->c = c;
	}

	void printC()
	{
		cout << "c: " << c << endl;
	}
private:
	T c;
};

// 普通函数
void func(A<int> &a)
{
	a.printA();
}

// 模板函数
template<class T>
void func2(A<T> &a)
{
	a.printA();
}

int main(int argc, char const *argv[])
{
	// A a(10);
	A<int> a(10);
	a.printA();

	A<double> aa(30.0);
	aa.printA();
	// 当普通函数用
	func(a);
	// 当模板函数使用
	func2<int>(a);

	cout << "----------" << endl;
	B b(100, 200);
	b.printB();

	cout << "----------" << endl;
	C<int> c(333, 666);		// c类是一个模板类
	c.printC();
	C<char> c2('x', 'y');
	c2.printC();

	return 0;
}

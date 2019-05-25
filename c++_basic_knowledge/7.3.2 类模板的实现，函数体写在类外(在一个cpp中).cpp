#include <iostream>
using namespace std;

template <class T>
class Complex;

template<class T>
Complex<T> mySub(Complex<T> &one, Complex<T> &another);

template<class t>
class Complex
{
public:
	friend	ostream	&operator<<	<T>	(ostream &os, Complex<T> &c);
	// 在类模板中 如果有友元重载操作符<< 或者 >> 需要在operator<< 和 参数列表之间加入<T>
	// 滥用友元函数， 本来可以当成员函数，却要用友元函数
	// 如果说是非<< >> 在模板类中当友元函数
	// 在这本模板类 之前声明这个函数
	friend Complex<T> mySub <T> (Complex<T> &one, Complex<T> &another);

	// 最终的定论， 模板类 不要轻易写友元函数， 要写的 就下<< 和 >>。
	Complex();
	Complex(T a, T b);

	Complex operator + (Complex &another);
	Complex operator - (Complex &another);
	void printComplex();
private:
	T a;
	T b;
};

template <class T>
Complex<T>::Complex(T a, T b)
{
}

template <class T>
Complex<T>::Complex()
{
	this->a = a;
	this->b = b;
}

template <class T>
void Complex<T>::printComplex()
{
	cout << "( " << a <<  " + " << b << "i" << ")" << endl;
}

template <class T>
Complex<T> Complex<T>::operator+(Complex<T> &another)
{
	Complex temp(a + another.a, b + another.b);
	return temp;
}

template <class T>
Complex<T> Complex<T>::operator-(Complex<T> &another)
{
	Complex temp(this->a - another.a, this->b = another.b);
	return temp;
}

// 友元函数
template<Class T>
ostream & another<<(ostream &os, Complex<T>&c)
{
	os << "( " << c.a << " + " << c.b << "i" << ")";
	return os;
}

template <class T>
Complex<T> mySub(Complex<T> &one, Complex<T> &another)
{
	Complex<T> temp(one.a - another.a, one.b - another.b);
	return temp;
}

int main(int argc, char const *argv[])
{
	Complex<int> a(10, 20);		// 让模板类具体化是为了告诉编译具体大小，分配内存
	// Complex<int> b(3, 4);
	a.printComplex();

	// Complex<int> c;
	// c = a + b;

	// c.printComplex();
	// cout << c << end;

	// c = mySub(a, b);
	// cout << c << endl;

	return 0;
}






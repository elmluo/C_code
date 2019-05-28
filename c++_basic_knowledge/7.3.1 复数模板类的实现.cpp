#include <iostream>
using namespace std;

template<class T>
class Complex
{
public:
	// 提供无参数的构造函数
	Complex<T>()
	{
		this->a = 0;
		this->b = 0;
	}
	
	// 提供有参数的构造函数
	Complex<T>(T a, T b)	// <T> 可写可不写，看编译器的支持程度
	{
		this->a = a;
		this->b = b;
	}

	void printComplex()
	{
		cout << "(" << a << "+" << b << "i)" << endl;
	}

	// 加法操作符的重载。
	Complex operator+(Complex &another);

	// 减法操作符的重载
	Complex operator-(Complex &another);
	// {
	// 	Complex temp(this->a + another.a, this->b + another.b);
	// 	return temp;
	// }
private:
	T a;
	T b;
};

// 加法操作符重载方法可在外部声明
template<class T>
Complex<T> Complex<T>::operator+(Complex<T> &another)		
{
	Complex temp(this->a + another.a, this->b + another.b);
	return temp;
};

template<class T>
Complex<T> Complex<T>::operator-(Complex<T> &another)
{
	Complex temp(this->a - another.a, this->b - another.b);
	return temp;
}

// 左移
template<class T>
ostream &operator << (ostream &os, Complex<T> &c)
{
	os << "(" << c.a << "+" c.b << "i)" << endl;
	return os;
}



int main(int argc, char const *argv[])
{
	
	Complex<int> c1(10, 20);
	c1.printComplex();

	Complex<int> c2(1, 2);
	Complex<int> c3;	// 调用无参数构造函数
	c3 = c1 + c2;
	c3.printComplex();

	Complex<int> c4;
	c4 = c1 - c2; 
	c4.printComplex();
	return 0;
}
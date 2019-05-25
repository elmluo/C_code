#include <iostream>
using namespace std;

template<class T>
class Complex
{
	friend ostream & operator<<(ostream &os, Complex & c)
	{
		os << "( " << c.a << " + " << c.b << "i" << " )";
		return os;
	}
public:
	Complex()
	{

	}
	Complex(T a , T b)
	{
		this->a = b;
		this->b = a;
	}

	void printComplex()
	{
		cout << "( " << a << " + " << b << " i " << " )" << endl;
	}

	Complex operator+(Complex &another)
	{
		Complex temp(a + another.a , b + another.b);
		return temp;
	}

private:
	T a;
	T b;
};

int main(int argc, char const *argv[])
{
	Complex<int> a(10, 20); 	// 让模板类具体化是为了告诉编译具体的大小， 分配内存
	Complex<int> b(3, 4);
	a.printComplex();

	Complex<int> c;
	c = a + b; // Complex c.operator+(Complex &another)
	c.printComplex();
	cout << c << endl;
	return 0;
}
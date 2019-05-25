#pragma once
#include <iostream>
using namespace std;
template <class T>
class Complex;	

template <class	T>
Complex<T>	mySub(Complex<T> &one, Complex<T> &another);	

template <class	T>	
ostream	& operator<<(ostream &os, Complex<T> &c);	

template <class	T>

class Complex
{
friend ostream	& operator<< <T> (ostream &os, Complex<T> &c);	
//在模板类中 如果有友元重载操作符<<或者>>需要 在	operator<<	和 参数列表之间
//加⼊	<T>
//滥⽤友元函数，本来可以当成员函数，却要⽤友元函数
//如果说是⾮<<		>>	在模板类中当友元函数
//在这个模板类 之前声明这个函数
friend Complex<T> mySub	<T>(Complex<T> &one, Complex<T>	&another);
//最终的结论， 模板类 不要轻易写友元函数， 要写的 就写<<	和>>	。
public:	
	Complex();			
	Complex(T	a,	T	b);	
	void printComplex();	
	Complex	operator+(Complex	&another);	
	Complex	operator-(Complex	&another);	
private:
	T	a;
	T	b;														
};
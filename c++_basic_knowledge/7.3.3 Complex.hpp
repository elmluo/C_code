#include	"7.3.3 Complex.h"
using namespace std;

template	<class	T>	
Complex<T>::Complex()	
{	
}	

template <class T>	
Complex<T>::Complex<T>(T a,	T b)	
{	
	this->a	= a;	
	this->b	= b;	
}	

template	<class	T>	
void	Complex<T>::printComplex()	
{	
	cout	<<	"(	"	<<	a	<<	"	+	"	<<	b	<<	"i"	<<	"	)"	<<	endl;	
}	

template	<class	T>	
Complex<T>	Complex<T>::operator+(Complex<T>	&another)	
{	
	Complex	temp(a	+	another.a,	b	+	another.b);	
	return	temp;	
}	

template	<class	T>	
Complex<T>	Complex<T>::operator-(Complex<T>	&another)	
{	
	Complex	temp(this->a	-	another.a,	this->b	=	another.b);	
	return	temp;	
}	

//友元函数
template	<class	T>	
ostream	&	operator<<(ostream	&os,	Complex<T>	&c)	
{	
	os	<<	"(	"	<<	c.a	<<	"	+	"	<<	c.b	<<	"i"	<<	"	)";	
	return	os;	
}	

template	<class	T>	
Complex<T>	mySub(Complex<T>	&one,	Complex<T>	&another)	
{	
	Complex<T>	temp(one.a	-	another.a,	one.b	-	another.b);	
	return	temp;	
}	

#include <iostream>
using namespace std;

void myswap(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}

void myswap(char &a, char &b)
{
	char t = a;
	a = b;
	b = t;
}

int main (void)
{
	int x = 1;
	int y = 2;
	myswap(x, y);
	cout << "x: " << x << "; y: " << y << endl;

	char a = 'c';
	char b = 'b';
	myswap(a, b);
	cout << "a: " << a << "; b: " << b << endl;
	return 0;
}
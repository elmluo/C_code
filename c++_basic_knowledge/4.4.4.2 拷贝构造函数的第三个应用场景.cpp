#include <iostream>
using namespace std;

class Location
{
public:
	// 带参数的构造函数
	Location(int xx = 0, int yy = 0)
	{
		X = xx;
		Y = yy;
		cout << "Constructor Object" << endl;
	}
	// copy 构造函数 完成对象的初始化
	Location(const Location &obj)	// copy构造函数
	{
		X = obj.X;
		Y = obj.Y;
		cout << "Copy Constructor." << endl;
	}
	~Location()
	{
		cout << X << ", " << Y << "Object destroyed" << endl;
	}

	int GetX() {
		return X;
	}

	int GetY() {
		return Y;
	}
private:
	int X;
	int Y;
};

void func(Location p)	// 会执行p = b 的操作， p会调用copy构造函数进行初始化
{
	cout << "func begin " << endl;
	cout << p.GetX() << endl;
	cout << "func end" << endl;
}

void test()
{
	Location a(1, 2);	// 对象a 调用带有构造函数的参数进行初始化
	Location b = a;		// 对象b 调用copy构造函数进行初始化
	cout << "------" << endl;
	func(b);	// b实参取得初始化形参p, 会调用copy构造函数
}

int main(int argc, char const *argv[])
{
	test();
	return 0;
}

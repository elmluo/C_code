#include <iostream>
#if 0
class Test
{
public:
	// 无参数构造函数
	Test()
	{
		;
	}
	// 带参数构造函数
	Test(int a, int b)
	{
		;
	}
	// 赋值构造函数
	Test(const Test &obj)
	{
		;
	}
private:
	int a;
	int b;
};

#endif


// （1） 无参数构造函数
class Test
{
public:
	// 无参数构造函数
	Test()
	{
		a = 0;
		b = 0;
		cout << "Test() 无参数构造函数执行" endl;
	}
private:
	int a;
	int b;
};

// (2) 有参数构造函数
class Test2
{
public:
	// 带参数构造函数
	Test2(int a);
	{
		cout << "a = " << a << endl;
	}
	Test2(int a, int b)
	{
		couot << "a = " << a << ", b = " << b << endl;
	}
	~Test2();
	
};

/*
// （3）拷贝构造函数（拷贝构造器完成）
// 由已存在的对象，创建新对象。
// 也就是说新对象，不由构造函数来构造，而且是由拷贝构造器来完成.
// 拷贝构造器的格式是固定的
	
	class 类名
	{
		类名(const 类名 & another)
		{
			拷贝构造体
		}
	}

	class A
	{
		A(const A & another)
		{
	
		}
	}
*/
int main(int argc, char const *argv[])
{
	Test t;	// 调用无参数构造函数
	Test2 t2(10); // 调用有参数构造函数 Test2(int a);
	Test2 t2(10, 20); // 调用有参数构造函数 Test2(int a, int b);
	return 0;
}

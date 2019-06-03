#include <iostream>
using namespace std;

class Test
{
public:
	Test()	// 无参数构造函数
	{
		cout << "我是无参数构造函数, 被调用了" << endl;
	}

	Test(int a)		// 带参数的构造体
	{
		m_a = a;
	}

	Test(const Test & another_obj)	// 拷贝构造函数
	{
		cout << "我也是构造函数，我是通过另外一个对象，来初始化自己" << endl;
		m_a = another_obj.m_a;
	}

	~Test()
	{
		cout << "我是析构函数， 自己被调用了" << endl;
	}

	void printT()
	{
		cout << "m_a = " << m_a << endl;
	}
private:
	int m_a;
};

int main(int argc, char const *argv[])
{
	// 拷贝构造函数的第一个场景
	Test t1(10);
	Test t2 = t1;	// 用对象t1 初始化 对象t2
	t2.printT();


	// 拷贝构造函数的第二个场景
	Test t22(t1);	// 对象创建传入参数的方式 用对象t1 初始化 对象t2
	t22.printT();

	
	return 0;
}

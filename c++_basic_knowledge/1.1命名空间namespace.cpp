#include <iostream>

/*
namespace 
	iostrem 有一个命名空间较std， std{cout}
	如果要使用cout endl等等这些标准输出, 一定要引入std命名空间
	using namespace std;
 */
// 第三种
using namespace std;	// 引入整个命名空间

// 第二种
// using std::cout; // using 关键字不是引入整个命名空间 而是引入命名空间的一个变量
// using std::endl;



// 如何定义一个明明空间
namespace namespaceA {
	int a = 20;
	int b = 20;
}
namespace namespaceB {
	int a = 20;

	namespace namespaceC
	{
		struct teacher
		{
			int id;
			char name[64];
		};
	}
}

void test()
{

	cout << "A::a=" << namespaceA::a << endl;
	cout << "B::a=" << namespaceB::a << endl;
	cout << "A::b=" << namespaceA::b << endl;

	// 创建一个struct teacher变量;
	using namespace namespaceB::namespaceC;	// 把namespaceC中的所有变量都引入
	struct teacher t;

}

void test2()
{
	// 直接使用构造体中的变量
	using namespace namespaceB::namespaceC::;
	
}

int main(int argc, char const *argv[])
{	

	int a = 0;

	// 第一种
	// std::cout << "hello world" << std::endl;

	cout << "hello world" << endl;	// cout 就是一个标准输出，就是一个黑屏
									// endl 他在c++当中就是\n;
	cout << "请输出一个数字" << endl;

	cin >> a;

	cout << "a=" << a << endl;
	test();
	return 0;
}

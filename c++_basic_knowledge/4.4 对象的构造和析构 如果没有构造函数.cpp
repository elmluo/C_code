#if 0
为每一个类提供一个public的initialize 函数
对象创建立即调用initialize函数进行初始化

确定
	initialize只是一个普通函数，必须显示的调用
	一旦由于失误原因，对象没有初始化，那么结果将是不确定的
	没有初始化对象，其内部变量的值是不确定的。
#endif

#include <iostream>
using namespace std;

class Test
{
public:
	void init(int a, int b)
	{
		m_a = a;
		m_b = b;
	}
private:
	int m_a;
	int m_b;
};

int main(void)
{
	Test t1;
	int a = 10;
	int b = 20;
	t1.init(a, b);
	Test tArray[3];
	// 手动调用显示初始化函数
	tArray[0].init(0, 0);
	tArray[1].init(0, 0);
	tArray[2].init(0, 0);

	Test t21;
	t21.init(0, 0);
	Test t22;
	t22.init(0,0);
	Test t23;
	t23.init(0,0);

	// 在这种情景之下 显示的初始化 显得很蹩脚
	Test tArray2[3] = {t21, t22, t23};

	// 在这种情景之下 满足不了， 编程需要
	Test tArray3[1999] = {t21, t22, t23};

	return 0;
}

#include <iostream>
#include <string>
using namespace std;

#if 0
优点: 内联代码，避免压栈和出栈的开销
缺点: 代码替换, 易使得生成代码体积变大, 容易产生逻辑错误.
#endif

# define SQR(x) ((x) * (x))

#if 0
优点: 高度抽象，避免重复开发
缺点: 压栈于出栈，带来开销
#endif

#if 0
内联函数的总结
	优点： 避免函数调用的开销
	代价： 由于内联函数的函数体在代码中会出现多个‘副本’, 因此会增加代码段的空间
	本质： 以牺牲代码段空间为代价，提高程序的运行时间的效率
	适用场景: 函数体很“小”， 且被平凡使用。
#endif

inline int sqr(int x)
{
	return x*x;
}

int main(void)
{
	int i = 0;
	while(i<5) {
	    // printf("%d \n", SQR(i++));
	    printf("%d \n", sqr(i++));
	}
	return 0;
}




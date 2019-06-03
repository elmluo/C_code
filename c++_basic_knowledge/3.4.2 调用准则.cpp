#if 0
1. 严格匹配，找到则调用
2. 通过隐式转换寻求一个匹配，找到则调用。
#endif

#if 0
1. 将所有同名函数作为候选者
2. 尝试寻找可行的候选函数
3. 精确匹配实参
4. 通过默认参数匹配实参
5. 通过默认类型转化匹配实参
6. 匹配失败
7. 最终寻找所有候选者，函数未定义， 编译失败
#endif

#include <iostream>
using namespace std;

void print(double a)
{
	cout << a << endl;
} 

int main(int argc, char const *argv[])
{
	print(1);	//=> int
	print(1.1);		//=> double
	print('a');		//=> int
	print(1.11f);		//=> double
	return 0;
}
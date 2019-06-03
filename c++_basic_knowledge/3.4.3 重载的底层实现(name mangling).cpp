#if 0
C++ 利用 name mangling(倾轧)技术，来改名函数名，区分参数不同的同名函数
实现原理: 用vcifld 表示void char int fload long double 及其引用
#endif

void func(char a);
void func(char a, int b, double c);

int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}

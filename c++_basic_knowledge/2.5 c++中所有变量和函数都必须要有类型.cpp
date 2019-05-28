/*

c++ 中所有的变量和函数都必须要有类型

C语言中的默认类型在C++中是不合法的

函数f的返回值是什么类型，参数有事什么参数？

函数g可以接受多少个参数？

 */

/*

在C语言中
	int f(); 表示返回值为int。 接受任意参数的函数
	int f(void); 表示返回值为int的无参函数
在C++中
	int f(); 和 int f(void) 具有相同的意义，都表示返回值为int的无参函数。

C++ 更加强调类型, 任意的程序元素都必须显示的指定类型

 */

// 更换成.cpp试试
f(i)
{
	printf("i=%d\n", i);
}

g()
{
	return 5;
}

int main(int argc, char const *argv[])
{
	f(19);
	printf("g()=%d\n", g(1, 2, 3, 4, 5));
	getchar();
	return 0;
}
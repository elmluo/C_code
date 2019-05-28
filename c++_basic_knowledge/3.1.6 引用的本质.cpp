
#include <iostream>


/*
思考1： C++在编译器定义引用时，背后做了什么工作
 */

/*
思考2： 引用有自己的空间？
 */

/*
1 引用在C++中内部实现了一个常指针
	Type &name <===> Type * const name

2 C++编译器在编译过程中使用 常指针 引用的内部实现，因此引用所占用的空间大小和指正相同

3 从使用的角度，引用会让人误会其只是一个别名，没有自己的存储空间。 这是C++ 为了实现实用性而做出的细节隐藏
 */

struct Teacher
{
	int &a;
	int &b;
};

void func(int &a)
{
	a = 5;
}

/*
间接赋值的三个条件
	1 定义两个变量 (一个实参一个形参)


	2 建立关联 实参取地址传给形参
	3 *p形参去间接的修改实参的值

引用在实现上，只不过是把：间接赋值成立的三个条件的后两步合二为一

当实参传给形参引用的时候，只不过是c++ 编译器帮我们程序员手工取了一个实参地址, 传递给了形参引用（常量指针)。
 */

void func(int * const a)
{
	*a = 5;
}


int main(int argc, char const *argv[])
{
	int a = 10;
	int &b = a;	// 注意： 单独定义的引用时，必须初始化
	b = 11;

	printf("a:%d\n", a);
	printf("b:%d\n", b);
	printf("&a:%p\n", &a);
	printf("&b:%p\n", &b);

	printf("--------------------- \n");

	printf("sizeof(Teacher) %lu \n", sizeof(Teacher));
	//=> 16
	
	printf("--------------------- \n");

	int x = 10;
	func(x);
	printf("x = %d\n", x);

	return 0;
}






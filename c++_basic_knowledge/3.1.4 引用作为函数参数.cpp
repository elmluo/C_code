/*
普通引用的声明时必须用其他变量进行初始化，引用作为函数参数声明不进行初始化。
 */

#include <iostream>
using namespace std;

struct Teacher
{
	char name[64];
	int age;
};

void printfT1(Teacher *pT)
{
	cout << pT->age << endl;
}

// pT 是t1的别名, 相当于修改了t1
void printfT2(Teacher &pT)
{
	pT.age = 222222;
	cout << pT.age << endl;
}

// pT和t1是两个不同的变量
void printfT3(Teacher pT)	// copy一份数据 给pT 不会影响实参。
{
	cout << pT.age << endl;
	pT.age = 3333;	// 只会修改pT变量， 不会修改t1变量
} 

int main(int argc, char const *argv[])
{
	Teacher t1;
	
	t1.age = 35;

	printfT1(&t1);

	printfT2(t1);	// pT是t1 的别名(引用)

	printf("t1.age: %d \n", t1.age);

	printfT3(t1); // pT是形参, t1 copy一份数据 给pT

	printf("t1.age: %d \n", t1.age);


	return 0;
}
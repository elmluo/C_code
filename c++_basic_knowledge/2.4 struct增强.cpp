/*
C语言中的struct定义了一组变量的集合，C编译器并不认为这是一种新的类
C++中的struct是一个新类型的定义声明
 */

#include <iostream>
using namespace std;

struct Student	// c++中认为struct是一种新的类型
{
	char name[100];
	int age;
};

int main(int argc, char const *argv[])
{
	Student s1 = {"wang", 1};
	Student s2 = {"wang2", 2};

	cout << "s1.name = " << s1.name << "; ";
	cout << "s1.age = " << s1.age << endl;

	cout << "s2.name = " << s2.name << "; ";
	cout << "s2.age = " << s2.age << endl;
	return 0;
}
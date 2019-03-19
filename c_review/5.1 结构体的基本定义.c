#include <stdio.h>
#include <string.h>

/**
 * 声明一个结构体类型
 */
struct _Teacher
{
	char name[32];
	char title[32];
	int age;
	char addr[128];
};

/**
 * 1.定义类型 用类型定义变量
 * 2.定义类项目能够的同时，定义变量。
 * 3.直接定义结构体变量
 */
struct _Student
{
	char name[32];
	char title[32];
	int age;
	char addr[128];
}s1, s2;	// 定义类型的同时，定义变量。

/**
 * 直接定义结构体变量
 */
struct
{
	char name[32];
	char title[32];
	int age;
	char addr[128];
}s3, s4;  // 直接定义结构体变量

/*************************************************
 * 初始化结构体变量的几种方法
 */
//1
struct _Teacher t4 = {"name", "title", 2, "addr2"};

//2
struct Dog1
{
	char name[32];
	char title[32];
	int age;
	char addr[128];
}d5= {"dog", "gongzhu", 1, "ddd"};

//3
struct
{
	char name[32];
	char title[32];
	int age;
	char addr[128];
}d6 = {"dog", "gongzhu", 1, "ddd"};

// 结构体变量的引用

int main(int argc, char const *argv[])
{
	struct _Teacher t3 = {"name2", "title2", 2, "addr2"};
	printf("%s\n", t3.name);
	printf("%s\n", t3.title);

	// 用指针法和变量法分别操作结构体
	struct _Teacher t4;
	struct _Teacher *pTeacher = NULL;
	pTeacher = &t4;
	strcpy(t4.name, "chaogege");
	strcpy(pTeacher->addr, "dfwefwefwefwefewf");
	printf("t4.name: %s \n", t4.name);
	return 0;
}








#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct _Myteacher
{
	char name[32];
	char title[32];
	int age;
	char addr[128];
};

typedef struct _Myteacher teacher_t;

void show_teacher(teacher_t t)
{
	printf("name: %s ", t.name);
	printf("title: %s ", t.title);
	printf("age: %d ", t.age);
	printf("addr: %s ", t.addr);
	printf("\n");
}

void copyTeacher(teacher_t to, teacher_t from)
{
	to = from;
}

void copyTeacher2(teacher_t *to, teacher_t *from)
{
	*to = *from;
}

// 结构体赋值和实参形参赋值研究。
int main(int argc, char const *argv[])
{
	teacher_t t1, t2, t3;
	memset(&t1, 0, sizeof(t1));
	strcpy(t1.name, "name");
	strcpy(t1.addr, "addr");
	strcpy(t1.title, "title");
	t1.age = 1;
	show_teacher(t1);

	// 结构体直接赋值
	t2 = t1;
	show_teacher(t2);

	copyTeacher(t3, t2);
	show_teacher(t3);

	copyTeacher2(&t3, &t2);
	show_teacher(t3);

	return 0;
}
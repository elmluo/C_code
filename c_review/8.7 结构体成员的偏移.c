#define  _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
	t1.id = p1->id;
	t1.name == p1->name  (p1 + sizeof(id)) // 实际上理解为对应内部成员的偏移量。
 */
struct teacher
{
	int id;
	char name[64];
	int age;
};

int main(void)
{
	struct teacher t1 = {0};
	struct teacher *p = &t1;

	int age = t1.age;
	int id = t1.id;

	// int id_offsize = (int)&(((struct teacher *)0)->id);
	// int name_offsize = (int)&(((struct teacher *)0)->name);
	// int age_offsize = (int)&(((struct teacher *)0)->age);
	// int age_off = (int)(&(p->age)) - (int)p;

	/*
		cast from pointer to smaller type 'int' loses information
		MAC 系统指针是8字节的。而int是4字节。会报错。可以使用长整型。
	 */
	long id_offsize = (long)&(((struct teacher *)0)->id);
	long name_offsize = (long)&(((struct teacher *)0)->name);
	long age_offsize = (long)&(((struct teacher *)0)->age);
	long age_off = (long)(&(p->age)) - (long)p;

	printf("id_off: %ld, name_off:%ld, age_off:%ld\n", id_offsize, name_offsize, age_offsize);
	printf("age_off : %d\n", age_off);

	return 0;
}
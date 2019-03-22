#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NAME_LEN (64)

struct teacher
{
	int id;
	int *name;
};

// 如果结构体中有指针，在堆上开辟空间，
// 以下这个拷贝函数是浅拷贝。
// 可能出现两个同样的指针，指向同一个区域，
// 如果第一指针设为NULL， 同时free堆内容。那么第二个同样的指针找不到内容，会报错。
void copy_teacher(struct teacher *to, struct teacher *from)
{
	*to = *from;
}

void copy_teacher_deep(struct teacher *to, struct teacher *from)
{
	to->name = (char *)malloc(NAME_LEN);
	memset(to->name, 0, NAME_LEN);
	printf("1231231231132123\n");
	// strcpy(to->name, from->name);
	printf("6666666666666666\n");
	to->id = from->id;
}


void print_teacher(struct teacher *tp)
{
	printf("id : %d, name : %s\n", tp->id, tp->name);
}

int main(void)
{
	struct teacher tp1 = {0}; //在栈上创建tp1的结构体。
	struct teacher tp2 = {0};

	tp1.id = 1;
	tp1.name = (char*)malloc(NAME_LEN);
	memset(tp1.name, 0, NAME_LEN);
	strcpy(tp1.name, "zhang3");

	//copy_teacher(&tp2, &tp1);
	copy_teacher_deep(&tp2, &tp1);  // tp1 拷贝给 tp2；

	print_teacher(&tp1);
	print_teacher(&tp2);

	if (tp1.name != NULL) {
		free(tp1.name);
		tp1.name = NULL;
	}

	if (tp2.name != NULL) {
		free(tp2.name);
		tp2.name = NULL;
	}

	return 0;
}




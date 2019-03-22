#include <stdio.h>
#include <string.h>
#include <stdio.h>

// 声明一个机构提类型
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

// 定义结构体数组
int main(int argc, char const *argv[])
{
	int i = 0;
	struct _Myteacher teaArray[3];
	for(i = 0; i < 3; ++i) {
		strcpy(teaArray[i].name, "a");
		teaArray[i].age = i + 20;
		strcpy(teaArray[i].title, "title");
		strcpy(teaArray[i].addr, "addr");
		show_teacher(teaArray[i]);
	}
	return 0;
}

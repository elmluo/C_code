#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Teacher
{
	char name[64];
	char *alisname;
	int age;
	int id;
} Teacher;

void printTeacher(Teacher *array, int num)
{
	int i = 0;
	for(i = 0; i < num; ++i) {
		printf("\n===================\n");
		printf("name: %s ", array[i].name);
		printf("alisname %s", array[i].alisname);
		printf("age: %d ", array[i].age);
		printf("\n");
	}
}

void sortTeacher(Teacher *array, int num)
{
	int i, j;
	Teacher temp;
	for(i = 0; i < num; ++i) {
		for(j = i + 1; j < num; ++j) {
			if (array[i].age > array[j].age) {
				temp = array[i];		
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

Teacher * createTeacher01(int num)
{
	Teacher * temp = NULL;
	temp = (Teacher *)malloc(sizeof(Teacher) * num);	// Teacher Array[3]
	if (temp == NULL){
		return NULL;
	}
	return temp;
}

int createTeacher02(Teacher **pT, int num)
{
	int i = 0;
	Teacher *temp = NULL;
	temp = (Teacher *)malloc(sizeof(Teacher) * num); // Teacher Array[3]
	if (temp == NULL)
	{
		return -1;
	}
	memset(temp, 0, sizeof(Teacher) * num);
	for (i = 0; i < num; i++) {
		temp[i].alisname = (char *)malloc(60);
	}
	*pT = temp;	 // 二级指针 形参 去间接的修改实参的值
	return 0;
}

void FreeTeacher(Teacher *p, int num)
{
	int i = 0;
	if (p == NULL) {
		return;
	}
	for(i=0; i<num; i++)
	{
		if (p[i].alisname != NULL)
		{
			free(p[i].alisname);
		}
	}
	free(p);
}

int main(int argc, char const *argv[])
{
	int ret = 0;
	int i = 0;
	int num = 3;
	Teacher *pArray = NULL;
	ret = createTeacher02(&pArray, num);
	if(ret !=0)
	{
		printf("func createTeacher02() er: %d \n", ret);
		return ret;
	}
	for(i=0; i<num; i++)
	{
		printf("\n please enter age: ");
		scanf("%d", &(pArray[i].age));
		printf("\n please enter name: ");
		scanf("%s", pArray[i].name);	// 向指针所指向的内存空间copy数据
		printf("\n please enter alias: ");
		scanf("%s", pArray[i].alisname );	// 向指针所指向的内存空间copy数据
	}

	printTeacher(pArray, num);
	sortTeacher(pArray, num);
	printf("排序之后 \n");
	printTeacher(pArray, num);
	FreeTeacher(pArray, num);

	return 0;
}




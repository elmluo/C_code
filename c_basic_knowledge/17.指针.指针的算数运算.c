#include <stdio.h>
#include <stdlib.h>

void pointer_increment();
void pointer_increment_2();
void pointer_increment_3();
void pointer_decrement();
void pointer_compare();
const int MAX = 3;

/*
ptr's value + sizeof(pointer's type)
 */

int main(int argc, char const *argv[])
{
	pointer_increment();
	pointer_increment_2();
	pointer_increment_3();
	pointer_decrement();
	pointer_compare();
	return 0;
}

void pointer_increment() {
	int var[] = {10, 100, 200};
	int i, *ptr;

	// ptr = &var;
	ptr = &var[0];
	// ptr = var;
	for (i = 0; i < MAX; ++i)
	{
		printf("存储地址：var[%d] = %x \n", i, ptr);
		printf("存储值: var[%d] = %d \n", i, *ptr);
		ptr++;
	}
}

void pointer_increment_2() {
	int arr[30]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
	int *ptr = &arr[0];   

	// int *ptr = arr;		// point at first element in array by default;
	printf("\n");
	for (int i = 0; i < 20; i++)
	{
		printf("%p\n", ptr++);
		printf("%d\n", (*ptr)++);
	}
}

void pointer_increment_3() {
	char a[50]="abcdefghijklmnopqrstuvwxyz";
	// int *ptr = (int *)a;
	char *ptr = a;		// point at first element in array by default;
	ptr+=5;
	printf("\n");
	printf("3 所指向的是：%p\n", ptr);
	printf("%c\n", *ptr);
}

void pointer_decrement() {
 	int var[] = {10, 100, 1000};
 	int i, *ptr;

 	ptr = &var[MAX-1];

 	printf("\n");
 	for (i = MAX; i > 0; i--) {
 		printf("存储地址: var[%d]=%x \n",i-1, ptr);
 		printf("储存值: var[%d] = %d \n", i-1, *ptr);
 		ptr--;
 	}
}

void pointer_compare() {
	int var[] = {10,100,1000};
	int i, *ptr;
	ptr = var;	// first address in array;
	i = 0;
	printf("\n");
	while (ptr <= &var[MAX - 1]) {
		printf("Address of var[%d] = %x\n", i , ptr);
		printf("Value of var[%d]\n", i, *ptr);
	}
	ptr++;
	i++;
}



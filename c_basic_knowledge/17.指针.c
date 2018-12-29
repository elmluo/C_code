#include <stdio.h>
#include <stdlib.h>

void print_address();
void print_pointer_variable();
void print_null_pointer();

/*
1. What is pointer

	A variable , the value is a address of another address;

	you must declare it before using it;
		int *ip
		double *dp;
		float *fp;
		char *ch;

	The only difference between	pointers of different data types, is that the data type of the variable or constant , pointed to by the pointer is different;	

 */

/*
2. how to use pointer

	Define a pointer variable
	Assign a variable address to pointer
	Access the value of , address available in the pointer variable;
 */

/*
3. NULL pointer in C language

	When a variable is declared, if there no exact address to assign;

	It is a good programming practice, to assign a NULL value to the pointer variable;
 */


/*
4. pointer type
	int *ip    	// int * 
	char *cp    // char *
	int(*ip)[3] // int(*)[3]
	int*(*ip)[4]// int*(*)[4]
 */

/*
4. pointer point to type
	int *ip 	// int
	char *cp 	// char *
	int(*ip)[3] // int()[3]
	int*(*)[4]	// int*()[4]
 */

int main(int argc, char const *argv[])
{
	print_address();
	print_pointer_variable();
	print_null_pointer();
	return 0;
}

void print_address() {
	int var1;
	char var2[10];
	printf("var1 的变量地址: %p \n", &var1);
	printf("var2 变量的地址: %p \n", &var2);
}

void print_pointer_variable() {
	int var = 20;
	int *ip;
	ip = &var;
	printf("Address of var is : %p\n", &var);
	printf("Address stored in ip variable: %p\n", ip);
	printf("Value of *ip variable is : %d \n", *ip);
}

void print_null_pointer() {
	int *ptr = NULL;
	printf("\n");
	printf("ptr 地址是： %p\n", ptr);
}

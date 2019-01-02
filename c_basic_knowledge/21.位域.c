#include <stdio.h>
#include <string.h>

struct 
{
	unsigned int widthValidated;
	unsigned int heightValidated;
} status1 ;

struct 
{
	unsigned int widthValidated : 1;
	unsigned int heightValidated : 1;
} status2;

struct
{
	unsigned int age:3;
} Age;

int main(int argc, char const *argv[])
{
	printf("Memory size occupied by status1: %lu\n", sizeof(status1));	
	printf("Memory size occupied by status2: %lu\n", sizeof(status2));	
	printf("\n");

	Age.age = 4;
	printf("Sizeof(Age):%lu\n", sizeof(Age));
	printf("Age.age: %d\n", Age.age);
	printf("\n");

	Age.age = 7;
	printf("Sizeof(Age): %lu\n", sizeof(Age));
	printf("\n");

	Age.age = 8;		// more than invalid;
	printf("Age.age: %d\n", Age.age);

	return 0;
}
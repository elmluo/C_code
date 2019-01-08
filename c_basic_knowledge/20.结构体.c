#include <stdio.h>



/*
	1. c arrays that store the same type of data items;
	2. structures are another user-defined available data type in C programming, which allows you to store different types of data items;
	3. structures used to represent a record;
 */


/*
1. define the structure
 */
struct Books {
	char title[50];
	char anthor[50];
	char subject[100];
	int book_id;
} book;

/*
2. different way about it;
 */
struct {
	int a;
	char b;
	double c;
} s1;

struct SIMPLE {
	int a;
	char b;
	double c;
};

struct SIMPLE t1, t[20], * t3;

typedef struct {
	int a;
	char b;
	double c;
} Simple2;
Simple2 u1, u2[20], *u3;

/*
3. contain other structures or pointer pointed to your own; 
 */
struct COMPLEX {
	char string[100];
	struct SIMPLE a;
};

struct NODE {
	char string[100];
	struct NODE *next_node;
};

/*
4. tow structures contain each other,
	 an incomplete declaration of one of these structures is required;
 */
struct B;
struct A {
	struct B *partner;
};
struct B {
	struct A *partner;
};

int main(int argc, char const *argv[])
{
	
	return 0;
}
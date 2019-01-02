#include <stdio.h>
#include <string.h>

/*
1. Use typedef to redefined class name;
 */

// typedef unsigned char CCC;
// CCC b1, b2;

typedef struct Books
{
	char title[100];
	char author[50];
	char subject[100];
	int book_id;
} XXX;

/*
2. typedef vs #define

	typedef just define the sign of class, #defined can define sign of class and value

	typedef is interpreted by the compiler, #defined is interpreted by the precompiler;
 */
#define TRUE 1
#define FALSE 0

int main(int argc, char const *argv[])
{
	// struct Books book;
	XXX book;
	strcpy(book.title, "C programming");
	strcpy(book.author, "chao ge ge");
	strcpy(book.subject, "programming language");
	book.book_id = 12345;

	printf( "书标题 : %s\n", book.title);
	printf( "书作者 : %s\n", book.author);
	printf( "书类目 : %s\n", book.subject);
	printf( "书 ID : %d\n", book.book_id);

	printf("\n");
	printf("TRUE 的值: %d \n", TRUE);
	printf("FALSE 的值: %d \n", FALSE);

	return 0;
}
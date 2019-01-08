#include <stdio.h>
#include <string.h>

/*
1. pointer of structure

	struct Books *struct_pointer;

	struct_pointer = &Book1;

	struct_pointer->title;
 */

void printBook (struct Books book);

struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

void printBook (struct Books * book) {
	printf( "Book title : %s\n", book->title);	// 为了使得指向该结构的指针访问结构的成员,您必须使用-> 运算符。
	printf( "Book author : %s\n", book->author);
	printf( "Book subject : %s\n", book->subject);
	printf( "Book book_id : %d\n", book->book_id);
}

int main(int argc, char const *argv[]) {
	struct Books Book1;
	struct Books Book2;

	strcpy( Book1.title, "C Programming");
	strcpy( Book1.author, "Nuha Ali"); 
	strcpy( Book1.subject, "C Programming Tutorial");
	Book1.book_id = 6495407;
	strcpy( Book2.title, "Telecom Billing");
	strcpy( Book2.author, "Zara Ali");
	strcpy( Book2.subject, "Telecom Billing Tutorial");
	Book2.book_id = 6495700;

	printBook(&Book1);
	printBook(&Book2);

	return 0;
}
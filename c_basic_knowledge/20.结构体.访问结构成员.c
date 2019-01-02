#include <stdio.h>
#include <string.h>

/*
1. use '.' to visit structure member;
 */

// declare structure Books
struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

int main(int argc, char const *argv[])
{
	// declare example of the Books
	struct Books Book1;
	struct Books Book2;

	strcpy(Book1.title, "C Programing");
	strcpy(Book1.author, "Chao ge ge");
	strcpy(Book1.subject, "C programing Totorial");
	Book1.book_id = 6495700;

	strcpy(Book2.title, "Telecom Billing");
	strcpy(Book2.author, "Zara Ali");
	strcpy(Book2.subject, "Telecom Billing Tutorial");
	Book2.book_id = 1234567;


	/*  Book1  */
	printf( "Book 1 title : %s\n", Book1.title);
	printf( "Book 1 author : %s\n", Book1.author);
	printf( "Book 1 subject : %s\n", Book1.subject);
	printf( "Book 1 book_id : %d\n", Book1.book_id);
	printf("\n");
	
	/*  Book2  */
	printf( "Book 2 title : %s\n", Book2.title);
	printf( "Book 2 author : %s\n", Book2.author);
	printf( "Book 2 subject : %s\n", Book2.subject);
	printf( "Book 2 book_id : %d\n", Book2.book_id);
	return 0;


}
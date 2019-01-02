#include <stdio.h>
#include <string.h>

struct Books
{
	char title[100];
	char author[100];
	char subject[100];
	int book_id;	
};

void printBook(struct Books Book1);

int main(int argc, char const *argv[])
{
	struct Books Book1;		// declare the Books example;
	struct Books Book2;

	/* Book1  */
	strcpy( Book1.title, "C Programming");
	strcpy( Book1.author, "Nuha Ali"); 
	strcpy( Book1.subject, "C Programming Tutorial");
	Book1.book_id = 6495407;

	/* Book2  */
	strcpy( Book2.title, "Telecom Billing");
	strcpy( Book2.author, "Zara Ali");
	strcpy( Book2.subject, "Telecom Billing Tutorial");
	// Book2.subject = "Telecom Billing Tutorial";		// is wroing;
	Book2.book_id = 6495700;

	/* print Book1  */
	printBook( Book1 );

	/* print Book2  */
	printBook( Book2 );
 
	return 0;
}

void printBook(struct Books book) {
	printf("Book title: %s \n", book.title);
	printf("Book author: %s \n", book.author);
	printf("Book subject: %s \n", book.subject);
	printf("Book book_id: %d \n", book.book_id);
}
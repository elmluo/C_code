#include <stdio.h>

struct Books 
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
} book = {"C language", "RUNOOB", "programming language", 12345678};

int main(int argc, char const *argv[])
{
	printf("\n title: %s; \n author: %s; \n subject: %s; \n book_id: %d; \n", book.title, book.author, book.subject, book.book_id);
	return 0;
}


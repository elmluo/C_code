#include <stdio.h>

/*
1. fopen:
	FILE * fopen(const char * filename, const char * mode)

	mode:
		r
		w
		a
		r+
		w+
		a+

	two-step
		rb
		wb
		ab
		rb+
		r+b
		wb+
		w+b
		ab+
		a+b
 */

/*
2. fclose
	 if close successfully, return 0;
	 if close unsuccessfully, return EOF 
 */

/*
3. fputc(wirte)
	int fputs(const char * s, FILE * fp);
	write string into fp
 */

void my_fputs() {
	FILE * fp = NULL;
	fp = fopen("/tmp/test.txt", "w+");
	fprintf(fp, "This is testing for fprintf... \n");
	fputs("This is testing for fputs...", fp);
	fclose(fp);
}

/*
4.fgetc(read)
 */
void my_fgets() {
	FILE * fp = NULL;
	char buff[255];
	fp = fopen("/temp/test.txt", "r+");

	fscanf(fp, "%s", buff);
	printf("1: %s\n", buff);

	fgets(buff, 255, (FILE*)fp);
   	printf("2: %s\n", buff );

	fgets(buff, 255, (FILE*)fp);
	printf("3: %s\n", buff );

	fclose(fp);
}

/*
Two-step I/O function
 */


int main(int argc, char const *argv[])
{
	// my_fputs();
	my_fgets();

	return 0;
}
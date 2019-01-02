#include <stdio.h>


void format_float()
{
	float f;
	printf("Enter a number \n");
	scanf("%f", &f);
	printf("value = %f \n", f);
}

void getchar_putchar() {
	int c;
	printf("Enter value: \n");
	c = getchar();
	printf("\n You entered:\n");
	putchar(c);
	printf("\n");
}

void gets_puts() {
	char str[100];
	printf("Enter a value: \n");
	gets(str);
	printf("\n You entered: \n");
	puts(str);
}

void scanf_printf() {
	char str[100];
	int i;
	printf("Enter a value \n");
	scanf("%s %d", str, &i);
	printf("\nYou entered: %s %d\n", str, i);
	printf("\n");
}

int main(int argc, char const *argv[])
{
	// format_float();
	// getchar_putchar();
	// gets_puts();
	scanf_printf();
	return 0;
}



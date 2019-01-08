#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void print_str();
void print_method_operate_string();
/*
In C, strings are actually one-dimensional character arrays,  terminated with null characters '\0'
 */
int main(int argc, char const *argv[])
{
	print_str();
	print_method_operate_string();
	return 0;
}

void print_str() 
{
	// char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
	char greeting[] = "Hello";
	printf("Greeting message: %s\n", greeting);
}

/*
2. methods to operate string
	strcpy(s1, s2)  copy s2 to s1;
	strcat(s1, s2)  connect sw to the end of s1;
	strlen(s1, s2)  return s1's length;
	strcmp(s1, s2)  return compare s1 and s2, the return type is boolean;
	strchr(s1, ch)  return a pointer which points the first position, ch in s1;
	strstr(s1, ch)  return a pointer which points the first position, str in s1;
 */
void print_method_operate_string() 
{
	printf("\n");
	char str1[12] = "Hello";
	char str2[12] = "World";
	char str3[12];
	int len;

	// copy str1 to str3
	strcpy(str3, str1);
	printf("strcpy(str3, str1): %s\n", str3);

	// connect str2 to str1
	strcat(str1, str2);
	printf("strcat(str1, str2): %s\n", str1);

	// return str1.length;
	len = strlen(str1);
	printf("strlen(str1): %d\n", len);
}

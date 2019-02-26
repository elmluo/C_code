#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int get_substr_num(char *str, char *sub_str)
{
	if (str==NULL || sub_str==NULL){
		fprintf(stderr, "%s\n", "str==NULL || sub_str==NULL: ");
		return -1;
	}
	char *p = NULL;
	int count = 0;
	p = str;
	do
	{
		p = strstr(p, sub_str);
		if (p!=NULL)
		{
			count++;
			p+=strlen(sub_str);
		}
	} while (p != NULL);
	return count;
}

int get_substr_num_2(char *str, char *sub_str)
{
	if (str==NULL || sub_str==NULL){
		fprintf(stderr, "%s\n", "str==NULL || sub_str==NULL: ");
		return -1;
	}
	char *p = NULL;
	int count = 0;
	p = str;
	while((p = strstr(p, sub_str)) != NULL) {
	    p+=strlen(sub_str);
	    count++;
	    if (*p == '\0'){
	    	break;
	    }
	}
	return count;
}

int main(int argc, char const *argv[])
{
	char *str = "jfoaijeoifjoifjojchaogegejfowejfochaogegejoijoij2342chaogege";
	// p                          🔼
	char *sub_str = "chaogege";
	int count = 0;
	// count = get_substr_num(str, sub_str);
	count = get_substr_num_2(str, sub_str);
	printf("count: %d\n", count);
	return 0;
}
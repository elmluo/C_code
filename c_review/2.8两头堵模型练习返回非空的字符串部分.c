#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * trimSpace
 * 		int trimSpace(char *inbuf, char *outbuf);
 * 		"    abcdefghijk   " --> "abcdefghijk";
 * @return [description]
 */
int trimSpace(char *inbuf, char *outbuf)
{
	if (inbuf == NULL || outbuf == NULL)
	{
		fprintf(stderr, "%s\n", "inbuf == NULL || outbuf == NULL");
		return -1;
	}
	int i = 0;
	int j = strlen(inbuf) -1;
	int len = 0;
	while(isspace(inbuf[i]) == ' ' && i < len) 
	{
	    i++;
	}
	while(isspace(inbuf[j] == ' ' && i < j)) 
	{
		j--;
	}
	len = j - i + 1;
	strncpy(outbuf, inbuf + i, len);
	outbuf[len] = '\0';

	return 0;
}

int main(int argc, char const *argv[])
{
	char *str = "    abcdefghijk   ";
	char buf[128] = {0}; 

	if (trimSpace(str, buf) < 0)
	{
		fprintf(stderr, "%s\n", "trimSpace is error");
		return -1;
	}
	printf("get buf is : %s\n", buf);
	return 0;
}
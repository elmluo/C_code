#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int str_copy1(char *dst, char *src)
{
	for(;*src!='\0';dst++, src++){
		*dst = *src;
	}
	*dst = '\0';
	return 0;
}

int str_copy2(char *dst, char *src)
{
	for (;*src!='\0';) {
		*dst++ = *src++;
	}
	return 0;
}

int str_copy3(char *dst, char *src)
{
	for (;(*dst = *src)!='\0';)
	{
		src++;
		dst++;
	}
	return 0;
}

int str_copy4(char *dst, char *src)
{
	// for(;(*dst++ = *src++)!='\0';){}
	while((*dst++ = *src++));
	return 0;
}

int str_copy5(/*out*/char *dst, /*in*/ char *src)
{	
	char *temp_dst = NULL;
	char *temp_src = NULL;
	int retn = 0;
	// judge parameters legal
	if (dst == NULL || src == NULL) {
		fprintf(stderr, "%s\n", "dst == NULL || src == NULL");
		retn = -1;
		goto END;
	}
	for (temp_dst = dst, temp_src = src; (*temp_dst++ = *temp_src++)!='\0';)
	{

	}

	printf("str_copy5: %s\n", dst);
END:
	return retn;
}

int main(int argc, char const *argv[])
{
	char *str = "123456789";
	char dst[128] = {0};
	str_copy5(dst, NULL);
	// printf("str=[%s]\n", str);
	printf("%s\n", dst);
	return 0;
}
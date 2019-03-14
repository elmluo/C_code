#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	// printf("%s\n", inbuf);
	while(isspace(inbuf[i]) && i < strlen(inbuf)) 
	{
	    i++;
	}
	while(isspace(inbuf[j] && i < j)) 
	{
		j--;
	}
	int len = 0;
	len = j - i + 1;
	strncpy(outbuf, inbuf + i, len);
	outbuf[len] = '\0';
	return 0;
}

/**
 * 2、键值对（“key = value”）字符串，在开发中经常使用.
	要求1：请自己定义一个接口，实现根据key获取.
	要求2：编写测试用例。
	要求3：键值对中间可能有n多空格，请去除空格。
	"key1	=	value1"
	"   key2=            value2    "
			⬆️			// p += strlen(keyp)
	"key3=value3"
	"key4=value4"
	"key5="
	"key6="

	keyvaluebuf IN: 传入原字符串
	keybuf IN: 要找到的key值
	valuebuf OUT: 得到value值
	valuebuflen: 得到的value长度
	return 0 成功 -1 失败
 */

int	getKeyByValue(char *keyvaluebuf, char *keybuf, char *valuebuf, int *valuebuflen)
{	
	if (keyvaluebuf == NULL || keybuf == NULL || valuebuf == NULL || valuebuf == NULL) {
		printf("%s\n", "keyvaluebuf == NULL || keybuf == NULL || valuebuf == NULL || valuebuf == NULL");
	}
	char *str = keyvaluebuf;
	char *key = keybuf;
	char *value = valuebuf;
	int retn = 0;
	int len = 0;
	str = strstr(str, key);
	if (str == NULL) {
		fprintf(stderr, "没有找到对应的key %s\n", key);
		return -1;
	}
	str += strlen(key);
	str = strstr(str, "=");
	if (str == NULL) {
		fprintf(stderr, "%s\n", "没找到等号");
		return -1;
	}
	str += strlen("=");
	retn = trimSpace(str, value);
	if (retn < 0) {
		fprintf(stderr, "%s\n", "trimSpace error");
		return -1;
	}
	len = strlen(value);
	*valuebuflen = len;

	return 0;
}	


int main(int argc, char const *argv[])
{
	char *str = "   key2   =                val fwefwefwe   ue2    ";
	char *key = "key2";
	char value[128] = {0};
	int len = 0;
	int retn = 0;
	retn = getKeyByValue(str, key, value, &len);
	if (retn < 0) {
		fprintf(stderr, "%s\n", "getKeyByValue error");
		return -1;
	}
	printf("key:%s --> value:%s\n", key, value);
	return 0;
}






#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main 主函数
 * @param  argc [控制台运行文件后面传的参数的个数]
 * @param  argv [控制台运行文件后面传的参数]
 * @param  *env [操作系统的环境变量]
 * @return      [description]
 */
int main(int argc, char const *argv[], char **env)
{
	int i = 0;
	printf("-------- argv -------\n");
	for(i = 0; i < argc; ++i) {
		printf("%s\n", argv[i]);
	}
	for(i = 0; env[i] != NULL; ++i) {
		printf("环境变量env[%d]: %s \n", i, env[i]);
	}
	printf("--------------------\n");
	return 0;
}
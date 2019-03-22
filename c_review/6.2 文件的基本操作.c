#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
r 打开，只读，文件必须存在。
w 文件不存在，创建； 存在，打开之后会清零。
a 文件内容末尾开始写。
 */

int main(int argc, char const *argv[])
{
	// 定义一个文件指针
	FILE *fp = NULL;
	// 打开文件
	fp = fopen("/Users/yytd/LUOCHAO/github_lc/c_code/c_review/6.2 file test.txt", "w");
	if (fp == NULL) {
		fprintf(stderr, "open file error \n");
		return 0;
	} else {
		printf("open file success \n");
	}

	if (fp != NULL) {
		fclose(fp);
	}
	return 0;
}
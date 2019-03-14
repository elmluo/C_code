#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '

void show_n_char(char ch, int num);

int main(int argc, char const *argv[])
{
	int spaces;
	show_n_char('*', WIDTH);
	putchar('\n');

	show_n_char(SPACE, 12); // 姓名前的一行
	printf("%s\n", NAME);

	spaces = (WIDTH - strlen(ADDRESS)) / 2; // 计算要跳动多少个空格
	show_n_char(SPACE, spaces); // 计算地址前空格
	printf("%s\n", ADDRESS);

	show_n_char(SPACE, (WIDTH - strlen(PLACE)) / 2); // 计算地点前面的空格
	printf("%s\n", PLACE);

	show_n_char('*', WIDTH);
	putchar('\n');
	
	return 0;
}

/**
 * define show_n_char;
 * @param ch  [description]
 * @param num [description]
 */
void show_n_char(char ch, int num)
{
	int i;
	for( i = 1; i <= num; i++) {
		putchar(ch);
	}
}



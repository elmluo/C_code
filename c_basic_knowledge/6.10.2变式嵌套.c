#include <stdio.h>
#include <stdlib.h>

int Nestedloop(int ROWS, int CHARS);
int Nestedloop2(int ROWS, int CHARS);

int main(int argc, char const *argv[])
{
	int ROWS = 6;
	int CHARS = 6;

	Nestedloop(ROWS, CHARS);
	Nestedloop2(ROWS, CHARS);

	return 0;
}

/**
 * 循环嵌套
 */
int Nestedloop(int ROWS, int CHARS){
	for(int i = 0; i < ROWS; i++) {
		for(char ch = 'A'; ch < 'A' + CHARS; ch++) {
			printf("%c", ch);  
		}
		printf("\n");
	}
	return 0;
}

/**
 * 循环嵌套变式
 * 外层循环 控制 内层循环
 */
int Nestedloop2(int ROWS, int CHARS) {
	for(int i = 0; i < ROWS; i++) {
		for(char ch = 'A' + i; ch < 'A' + CHARS; ch++) {
			printf("%c", ch);
		}
		printf("\n");
	}
	return 0;
}
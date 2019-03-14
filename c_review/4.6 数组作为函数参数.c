#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void make_array(int array[3][4]) 
{
	int i, j;
	for(i = 0; i < 3; ++i) {
		for(j = 0; j < 4; ++j) {
			array[i][j] = i + j;
		}
	}
}

/**
 * 编译器为了节省内存。
 * 会将多维数组，转化成减去1的指针。
 * 数组无论是几维数组，都是连续的线性空间。
 * int a[3][4] --> int (*a)[4], row, col
 */
void make_array_2(int(*array)[4], int row, int col)
{
	int i = 0, j = 0;
	for(i = 0; i < row; ++i) {
		for(j = 0; j < col; ++j) {
			array[i][j] = i + j;
		}
	}
}

/**
 * 参数传入三维数组
 * int b[3][4][5] --> int (*b)[4][5], zIndex, row, col
 */
void make_array_3(int (*b)[4][5], int zIndex, int row, int col)
{
	int i = 0, j = 0, k = 0;
	for(i = 0; i < zIndex; ++i) {
		for(j = 0; j < row; ++j) {
			for(k = 0; k < col; ++k) {
				// b[i][j][k] = i + j + k;
				*(*(*(b + i) + j) + k) = i + j + k;
			}
		}
	}
}

void print_array(int array[3][4]) 
{
	int i, j;
	for(i = 0; i < 3; ++i) {
		for(j = 0; j < 4; ++j) {
			printf("arr[%d][%d] = %d  ", i, j, array[i][j]);
		}
		printf("\n");
	}
}
typedef int(*ARRAY_4_5)[4][5];
// void print_array_3(int (*b)[4][5], int zIndex, int row, int col)
void print_array_3(ARRAY_4_5 b, int zIndex, int row, int col)
{
	int i = 0, j = 0, k = 0;
	for(i = 0; i < zIndex; ++i) {
		for(j = 0; j < row; ++j) {
			for(k = 0; k < col; ++k) {
				printf("b[%d][%d][%d]: %d   ", i, j, k, b[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
}

int main(int argc, char const *argv[])
{
	int a[3][4];
	int b[3][4][5];
	// make_array(a);
	make_array_3(b, 3, 4, 5);
	print_array_3(b, 3, 4, 5);
	return 0;
}
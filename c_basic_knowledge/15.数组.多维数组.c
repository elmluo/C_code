#include <stdio.h>


int main(int argc, char const *argv[])
{
	/*
	初始化二维数组
	 */
	// int a[3][4] = {
	// 	{0,1,2,3},
	// 	{4,5,6,7},
	// 	{8,9,10,11},
	// };

	// int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
	

	int a[5][2] = {{0,0}, {1,2},{2,4}, {3,6}, {4,8}};
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("a[%d][%d]=%d\n", i, j, a[i][j]);
		}
	}
	return 0;
}

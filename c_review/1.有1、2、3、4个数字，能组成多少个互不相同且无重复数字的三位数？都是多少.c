#include <stdio.h>


/*
有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
 */

int main(int argc, char const *argv[])
{
	int i; // 百位
	int j; // 十位
	int k; // 各位
	for (i = 1; i < 5; ++i)
	{
		for (j = 1; j < 5; ++j)
		{
			if (j == i) {
				continue;
			}
			for (k = 1; k < 5; ++k)
			{
				if (k == i || k == j) {
					continue;
				}
				printf("%d%d%d\n", i, j ,k);
			}
		}
	}
	return 0;
}
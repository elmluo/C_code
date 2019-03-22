#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * 一个数组，从第几位开始，找几位后的结果。
 * @param  x   [description]
 * @param  pos [description]
 * @param  n   [description]
 * @return     [description]
 */
unsigned int getBit(unsigned int x, int pos, int n)
{
	return (x >> pos) && ~((~0 << n));
}

int main(int argc, char const *argv[])
{
	unsigned x = 0xff30ff30;
	unsigned int result = 0;
	result = getBit(x, 16, 8);
	printf("%x\n", result);
	return 0;
}

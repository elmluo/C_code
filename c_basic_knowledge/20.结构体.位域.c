#include <stdio.h>
#include <string.h>

struct bs
{
	int a:8;
	int b:2;
	int c:6;
} data;

struct packed_struct {
	unsigned int f1:1;
	unsigned int f2:1;
	unsigned int f3:1;
	unsigned int f4:1;
	unsigned int type: 4;
	unsigned int my_int: 9;
} pack;

struct cs 
{
	unsigned a:4;
	unsigned  :4;	// 空域
	unsigned b:4;	// 从下一单元开始存放
	unsigned c:4;
};

int main(int argc, char const *argv[])
{
	struct bs
	{
		unsigned a:1;
		unsigned b:3;
		unsigned c:4;
	} bit, *pbit;
	bit.a = 1;
	bit.b=7;
	bit.c=15;
	printf("%d,%d,%d\n", bit.a, bit.b, bit.c);
	
	pbit = &bit;
	pbit -> a = 0;
	pbit ->b &= 3;
	pbit -> c |= 1;
	printf("%d, %d, %d\n",pbit->a, pbit->b,pbit->c );

	return 0;
}
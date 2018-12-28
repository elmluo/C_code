#include <stdio.h>

int main(int argc, char const *argv[])
{
	/*
	count operator
	 */
	int a = 21;
	int b = 10;
	int c;
	c = a + b;
   	printf("Line 1 - c 的值是 %d\n", c );
   	c = a - b;
   	printf("Line 2 - c 的值是 %d\n", c );
   	c = a * b;
   	printf("Line 3 - c 的值是 %d\n", c );
   	c = a / b;
   	printf("Line 4 - c 的值是 %d\n", c );
   	c = a % b;
   	printf("Line 5 - c 的值是 %d\n", c );
   	c = a++;  // 赋值后再加 1 ，c 为 21，a 为 22
   	printf("Line 6 - c 的值是 %d\n", c );
   	c = a--;  // 赋值后再减 1 ，c 为 22 ，a 为 21
   	printf("Line 7 - c 的值是 %d\n", c );

   	// deference between a++ and ++a
   	a = 10;
   	c = a++; 
   	printf("先赋值后运算：\n");
   	printf("Line 1 - c 的值是 %d\n", c );
   	printf("Line 2 - a 的值是 %d\n", a );
   	a = 10;
   	c = a--; 
   	printf("Line 3 - c 的值是 %d\n", c );
   	printf("Line 4 - a 的值是 %d\n", a );
 
   	printf("先运算后赋值：\n");
   	a = 10;
   	c = ++a; 
   	printf("Line 5 - c 的值是 %d\n", c );
   	printf("Line 6 - a 的值是 %d\n", a );
   	a = 10;
   	c = --a; 
   	printf("Line 7 - c 的值是 %d\n", c );
   	printf("Line 8 - a 的值是 %d\n", a );

   	printf("\n");


   	/*
   	relational operator
   		== > < >= <=
   	 */
	a = 21;
	b = 10;

	if( a == b )
	{
	  printf("Line 1 - a 等于 b\n" );
	}
	else
	{
	  printf("Line 1 - a 不等于 b\n" );
	}
	if ( a < b )
	{
	  printf("Line 2 - a 小于 b\n" );
	}
	else
	{
	  printf("Line 2 - a 不小于 b\n" );
	}
	if ( a > b )
	{
	  printf("Line 3 - a 大于 b\n" );
	}
	else
	{
	  printf("Line 3 - a 不大于 b\n" );
	}
	/* 改变 a 和 b 的值 */
	a = 5;
	b = 20;
	if ( a <= b )
	{
	  printf("Line 4 - a 小于或等于 b\n" );
	}
	if ( b >= a )
	{
	  printf("Line 5 - b 大于或等于 a\n" );
	}

	/*
	 logical operator 
	 	&&、||、 !
	 */
	a = 5;
	b = 20;

	if ( a && b )
	{
	  printf("Line 1 - 条件为真\n" );
	}
	if ( a || b )
	{
	  printf("Line 2 - 条件为真\n" );
	}

	/* 改变 a 和 b 的值 */
	a = 0;
	b = 10;
	if ( a && b )
	{
	  printf("Line 3 - 条件为真\n" );
	}
	else
	{
	  printf("Line 3 - 条件不为真\n" );
	}
	if ( !(a && b) )
	{
	  printf("Line 4 - 条件为真\n" );
	}



	/*
	Bit Operator
		&、|、^、~、<<、>>
		^:
			0^0=0,0^1=1	0异或任何数，其结果=任何数
			1^0=1,1^1=0	1异或任何数，其结果=任何数取反
			x^x=0	任何数异或自己，等于把自己置0
	 */
	a = 60;		//00111100
	b = 13;		//00001101
	c = 0;

	c = a & b;       /* 12 = 0000 1100 */ 
	printf("Line 1 - c 的值是 %d\n", c );

	c = a | b;       /* 61 = 0011 1101 */
	printf("Line 2 - c 的值是 %d\n", c );

	c = a ^ b;       /* 49 = 0011 0001 */
	printf("Line 3 - c 的值是 %d\n", c );

	c = ~a;          /*-61 = 1100 0011 */
	printf("Line 4 - c 的值是 %d\n", c );

	c = a << 2;     /* 240 = 1111 0000 */
	printf("Line 5 - c 的值是 %d\n", c );

	c = a >> 2;     /* 15 = 0000 1111 */
	printf("Line 6 - c 的值是 %d\n", c );

	/*
	assignment operator
	 */
	a = 21;
	c = 0;
	c =  a;
	printf("\n");
	printf("Line 1 - =  运算符实例，c 的值 = %d\n", c );

	c +=  a;
	printf("Line 2 - += 运算符实例，c 的值 = %d\n", c );

	c -=  a;
	printf("Line 3 - -= 运算符实例，c 的值 = %d\n", c );

	c *=  a;
	printf("Line 4 - *= 运算符实例，c 的值 = %d\n", c );

	c /=  a;
	printf("Line 5 - /= 运算符实例，c 的值 = %d\n", c );

	c  = 200;
	c %=  a;
	printf("Line 6 - = 运算符实例，c 的值 = %d\n", c );

	c <<=  2;
	printf("Line 7 - <<= 运算符实例，c 的值 = %d\n", c );

	c >>=  2;
	printf("Line 8 - >>= 运算符实例，c 的值 = %d\n", c );

	c &=  2;
	printf("Line 9 - &= 运算符实例，c 的值 = %d\n", c );

	c ^=  2;
	printf("Line 10 - ^= 运算符实例，c 的值 = %d\n", c );

	c |=  2;
	printf("Line 11 - |= 运算符实例，c 的值 = %d\n", c );

	/*
	other operator
		sizeof()： get size of variable
		&: return address of variable
		*: point to a variable
		?: ：express
	 */
	
	int e = 4;
	short f;
	double g;
	int * ptr;

	// sizeof
	printf("变量e的大小=%lu\n", sizeof(e));
	printf("变量f的大小=%lu\n", sizeof(f));
	printf("变量g的大小=%lu\n", sizeof(g));

	// * and & 
	ptr = &e;
	printf("e 的值是%d\n", e);
	printf("*ptr 是%d\n", *ptr);





	return 0;
}
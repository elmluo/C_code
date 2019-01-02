#include <stdio.h>
#include <math.h>

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main(int argc, char const *argv[])
{	
	/*
	integer constant
	 */
	const int  INT_A = 10;		// legal
   	const int  INT_B  = 5u;		// legal and unsigned
   	const int  INT_C = 0xFeeL;	// legal
   	const int INT_D = 0213;		// legal
   	const int INT_E = 30l;
   	const int INT_F = 30ul;
   	printf("%d, %u, %x, %d, %o, %d, %d \n", 
   		INT_A, INT_B, INT_C, INT_C, INT_D, INT_E, INT_F
   		);

   	/*
   	float constant
   	 */
   	const float FLOAT_A = 3.14159;		// legal
   	const float FLOAT_B = 314159E-5L;	// legal
   	printf("%f, %f\n", FLOAT_A, FLOAT_B);

   	/*
   	char constant
   	 */
   	const char CH = 'x';	//legal
   	printf("%c \n", CH );

   	/*
   	string constant
   	 */
   	// const char arr[] = "a,b,c";
   	const char *arr = "a,b,c,d,e,123,444,555,jiajfoiejof";
   	printf("%s \n", arr);


   	/*
   	use #define 
   	 */
   	int area;
   	area = LENGTH * WIDTH;
   	printf("value of area: %d \n", area);
   	printf("%c \n",	NEWLINE);







	return 0;
}
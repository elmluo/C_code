#include <stdio.h>
#include <math.h>

int sum(int a, int b);

/**
 * global variable
 * 		
 */

int g = 20;

int main(int argc, char const *argv[])
{
	/**
	 * local variable
	 */
	
	int a, b;
	int c;

	a = 30;
	b = 20;

	printf("value of g is using global %d\n", g);

	// The names of local variable and global variable can be the same;
	int g = 10;
	printf("value of g is using variable %d\n", g);

	g = a + b;
	printf("value of a = %d, b=%d and g = %d \n", a, b, g);


	/**
	 * form parameters
	 * 
	 */
	c = sum(a, b);
	printf("value of c %d \n", c);
	return 0;

}

int sum (int a, int b) {
	return a + b;
}



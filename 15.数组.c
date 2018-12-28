#include <stdio.h>
#include <math.h>

/**
 * a fixed size ordered collection of elements of the same type.
 * 
 * It is often considered to be a series of variable of the same type.
 * 
 */

/**
 * initialize the array
 */
// double blance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};
// double salary = blance[9];


int main(int argc, char const *argv[])
{
	int n[10];
	int i, j;

	for (i = 0; i < 10; i++)
	{
		n[i] = i + 100;
	}

	for (j = 0; j < 10; j++) {
		printf("Element[%d] = %d \n", j, n[j]);
	}
	
	return 0;
}
#include <stdio.h>
#include <math.h>

// 函数的申明
int max (int num1, int num2);
void swap(int *x, int *y);

int main(int argc, char const *argv[])
{
	int a = 100;
	int b = 200;
	int result;
	result = max(a, b);
	printf("Max value is: %d\n", result);

	swap(&a, &b);
	printf("交换后a的值： %d\n", a);
	printf("交换后b的值： %d\n", b);
	return 0;
}


/*
	define

	return_type funciton_name (parameter list)
	{
		body of the function
	}
*/

int max(int num1, int num2) {
	return (num1 > num2) ? num1 : num2;
}

/*
	parameter
		1. form param: like local variable, it is created when entering the function, and is destroyed when the function is exited.

		2. value call
		3. reference call
 */

/*
	reference call
 */
void swap(int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	return;
}




#include <stdio.h>

double getAverage(int arr[], int size);

int main(int argc, char const *argv[])
{
	/*
	 1. pointer:  void myFunction (int *param)
	 2. array of defined sizes: void myFunction(int param[10])
	 3. array of undefined sizes: void myFunction(int param[])

	 Each way tells the compiler that is will receive an integer pointer

	 PS: void myFunction (int a[][]) will be wring.
	 right: void myFunction (int a[][5]);
	 		void myFunction (int (*a)[5], int n, int m)
	 		void myFunction (int *a, int n, int m)

	 */

	int blance[5] = {1000, 2, 4,17,50};
	double avg = getAverage(blance, 5);

	printf("平均值是%f\n", avg);

	return 0;
}

double getAverage(int arr[], int size) {
	int i;
	double avg;
	double sum = 0;

	for (i = 0; i < size; ++i)
	{
		sum += arr[i];
	}

	avg = sum / size;
	return avg;
}


#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int sum(int arr[], int n);

int main(int argc, char const *argv[])
{
	int marbles[SIZE] = {20,10,20,2,23,3,2,5,5,6};
	long answer;
	answer = sum(marbles, SIZE);
	printf("The total number of marbles is %ld \n", answer);
	printf("The size of marbles is %zd bytes \n", sizeof marbles);
	return 0;
}

int sum(int arr[], int n)
{
	int i;
	int total = 0;
	for( i = 0; i < n; ++i) {
		total += arr[i];
	}
	printf("The size of arr is %zd bytes.\n", arr);
	return total;
}


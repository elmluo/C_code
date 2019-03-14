#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long fact(int n);
long rfact(int n);
/**
 * 尾递归
 * 	最简单的递归形式是把递归调用置于函数的末尾，
 * 	return调用之前。
 */
int main(int argc, char const *argv[])
{
	int num;
	printf("%s\n", "This program calculates factorials.");
	printf("%s\n", "Enter a value in the range 0-12 (q to quit): \n");
	while(scanf("%d", &num) == 1) 
	{
	    if (num < 0) 
	    {
	    	printf("%s\n", "No negative numbers, please.");
	    } 
	    else if (num > 12)
	    {
	    	printf("%s\n", "keep input under 13.");
	    }
	    else
	    {
	    	printf("loop: %d factorial = %ld\n", num, fact(num));
	    	printf("recursion: %d factorial = %ld\n", num, rfact(num));
	    }
	    printf("Enter a value in the range 0-12(q to quit): \n");
	}
	printf("%s\n", "Bye.");
	return 0;
}

/**
 * 用循环 写结阶乘
 */
long fact(int n)
{
	long ans;
	for(ans = 1; n > 1; n--)
	{
		ans *= n;
	}
	return ans;
}

/**
 * 用尾递归 写阶乘
 */
long rfact(int n)
{
	long ans;
	if (n > 0) {
		ans = n * fact(n-1);
	} else {
		ans = 1;
	}
	return ans;
}





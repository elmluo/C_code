#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LEN 20;

// struct names {
// 	char first[LEN];
// 	char last[LEN];
// };

struct guy {
	struct names handle;
	char favfood[LEN];
	char job[LEN];
	float income;
};

int main(int argc, char const *argv[])
{
	struct guy fellow[2] = {
		{
			{"Steam", "luo"},
			"番茄炒蛋",
			"corder",
			100000.00
		},
		{
			{"Rodney", "Swillbelly"},
			"tripe",
			"tabloid editor",
			500000.00
		}
	}
	struct guy *him; 	// 一个指向结构体的指针
	him = &fellow[0];	// 告诉编译器指针指向何处
	printf("address: #1 %p #2 %p \n", &fellow[0], &fellow[1]);
	printf("pointer #1: %p #2 %p \n", him, him + 1);
	return 0;
}

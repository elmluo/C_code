#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int zippo[4][2] = {
		{2, 4},
		{6, 8},
		{1, 3},
		{5, 7}
	};
	// 在这里看的话，如果程序员，恰巧使用了一个指向二维数组的指针。
	// 而且要通过该指针获取值的时候。最好用简答的数组表示法，而不是指针表示法
	// 
	printf("zippo = %p, zippo + 1 = %p \n", zippo, zippo + 1 );
	printf("zippo[0] = %p, zippo[0] + 1 = %p \n", zippo[0], zippo[0] + 1);
	printf("*zippo = %p, *zippo + 1 = %p \n", *zippo, *zippo + 1);
	printf("zippo[0][0] = %d \n",zippo[0][0]);
	printf("*zippo[0] = %d \n",*zippo[0]);
	printf("**zippo = %d \n", **zippo);
	printf("zippo[2][1] = %d \n", zippo[2][1]);
	printf("*(*(zippo+2) + 1) = %d \n",*(*(zippo+2) + 1));
	return 0;
}
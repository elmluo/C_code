#include <stdio.h>
#include <stdlib.h>


int max(int x, int y){
	return x > y ? x : y;
}

// callback
void populate_array(int *array, size_t arraySize, int (*getNextValue)(void))
{
    for (size_t i=0; i<arraySize; i++)
        array[i] = getNextValue();
}
 

int getNextRandomValue(void)
{
    return rand();
}

int main(int argc, char co nst *argv[])
{
	/*
	function pointer  used like normal functions。 
	 */
	int (* p)(int, int) = &max;	// &也可以省略

	int a, b, c, d;
	printf("请输入三个数字: \n");
	scanf("%d %d %d", &a, &b, &c);
	d = p(p(a, b), c);
	printf("最大数字是: %d\n", d);




	int myarray[10];
	populate_array(myarray, 10, getNextRandomValue);
    for(int i = 0; i < 10; i++) {
        printf("%d ", myarray[i]);
    }
    printf("\n");

	return 0;
}





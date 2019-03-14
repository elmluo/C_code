#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void up_and_down(int);

int main(int argc, char const *argv[])
{
	up_and_down(1);
	return 0;
}
/**
 * 1. 每一集函数调用都有自己的变量
 * 		 变量 n 	 n 	 n 	 n
 * 	 一级	 1	 
 * 	 二级	 1	 2
 * 	 三级	 1	 2	 3
 * 	 四级	 1 	 2	 3	 4
 * 	 四级返回后1	 2 	 3
 * 	 三级返回后1 	 2	 3
 * 	 二级返回后1	 2
 * 	 一级返回后1
 * 2.每次函数调用都会返回一次，返回完毕之后, 控制权将被传回上一级。
 * 3.函数递归调用之前的语句，均按照被调用函数的顺序执行。
 * 4.函数递归调用之后的语句，均按照函数调用的相反顺序执行。
 * 5.虽然每一级递归都有自己的变量，但是并没有拷贝函数的代码。递归调用相当于从头开始再执行代码。
 * 	有时候递归可以用来代替循环，循环也可以用来代替递归
 * 6.递归必须需要有递归条件。
 *
 * 
 * @param n [description]
 */
void up_and_down(int n)
{
	printf("Level %d : n location %p\n", n, &n);  // #1
	if (n < 4) {
		up_and_down(n + 1);
	}
	printf("Level %d : n location %p\n", n, &n);  // #2
}
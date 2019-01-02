#include <stdio.h>
#include <math.h>

// 函数声明
void func1(void);
// int count = 10;	// Global variables are static by default;
static int count = 10;		

int main(int argc, char const *argv[])
{
	/*
	auto:
		used by local variable, and just it's defined in function context;
	 */
	// int mount;
	// auto int mount;

	/*
	register:
		Not only defined variable in RAM, but also defined in register;
	 */
	// register int miles;

	/*
	static：
		1. defined by local variable , you can use this between functions, and it can't be reset;
		2. defined by global variable， you can use this in the same file.
	 */
	while (count--){
		func1();
	}

	/*
	extern
		 1.provide a reference for global variable, you can use it in all programing files
		 
		 3.For variable that cannot be initialized, the variable is pointed to a previously defined storage location.

		 2.Often used when two or more files share the same global variable or function
	 */
	


	return 0;

}


void func1(void) {
	// use static local variable can't be reset;
	static int thingy=5;
	thingy++;
	printf(" thingy 为 %d ， count 为 %d\n", thingy, count);
}







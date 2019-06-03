#if 0 
1. 函数名相同
2. 参数个数不同， 参数的类型不同，参数的顺序不同，均可构成重载。
3. 返回值类型不同，则不能构成重载。
#endif

void func(int a);	//=> 0k
void func(char a);	//=> 0k
void func(char a, int b);	//=> 0k
void func(int a, char b);	//=> 0k
char func(int a);	// error 和第一个函数有冲突



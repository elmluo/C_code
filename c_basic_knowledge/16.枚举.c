#include <stdio.h>
#include <stdlib.h>

/*
1. Enumeration definition

	enum name {elem1=1, elem2, elem3,....}

	Note: the first element value is 0 for the integer, 
		and the value of the subsequent element is incremented by 1.
 */

// #define MON 1
// #define MON 2
// #define MON 3
// #define MON 4
// #define MON 5
// #define MON 6
// #define MON 7

/**
 * 2.Enumeration variable definition
 * 
 * three way to define enumerable variable;
 * 
 *  	1. defined type first, them define variable
 *  	
 *  		enum Day {
 *  			MON=1, TUE, WED, THU, FRI, SAT, SUM
 *  		};
 *  		enum DAY day;
 *
 * 		2. Defined variable while defining type;
 *
 * 			enum Day {
 * 				MON=1, TUE, WED, THU, FRI, SAT, SUM
 * 			} day
 * 			
 * 		3. Omitting type and directly defining variables
 *
 * 			enum {
 * 				MON=1, TUE, WED, THU, FRI, SAT, SUM
 * 			} day
 *  	
 */

enum DAY {
	MON=1, TUE, WED, THU=10, FRI, SAT, SUN
} day;

enum color {
	red=1, green, blue
};

void print_enum();
void print_enum_switch();
void convert_integer_enumeration();

int main(int argc, char const *argv[])
{

	// enum DAY day;
	day = WED;
	printf("%d\n", day);

	print_enum();
	print_enum_switch();
	convert_integer_enumeration();

	return 0;
}

/*
3. Traversing enumeration elements
	ps: Enumeration types are not contiguous, and such enumeration cannot be traverse
	like this: enum {NUM_1, NUM_2=10, NUM_3,...} cannot be traverse
 */
void print_enum () 
{
	for (day=MON; day <= SUN; ++day)
	{
		printf("枚举元素: %d \n", day);
	}
}

/*
4. Enumeration use in switch
 */

void print_enum_switch () 
{
	enum color favorite_color;

	// printf("请输入你喜欢的颜色: (1. red, 2. green, 3. blue): \n");

	// scanf("%d", &favorite_color);
	
	favorite_color = red;

	switch (favorite_color)
    {
	    case red:
	        printf("你喜欢的颜色是红色");
	        break;
	    case green:
	        printf("你喜欢的颜色是绿色");
	        break;
	    case blue:
	        printf("你喜欢的颜色是蓝色");
	        break;
	    default:
	        printf("你没有选择你喜欢的颜色");
    }

}

void convert_integer_enumeration() {
	enum day {
		saturday,
        sunday,
        monday,
        tuesday,
        wednesday,
        thursday,
        friday
	} workday;

	int a = 1;
	enum day weekend;
	// weekend = (enum day) a;  // convert type
	weekend = a;	// it is wrong
	printf("weekend: %d \n", weekend);
}












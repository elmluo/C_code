#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define YEARS 5
#define MONTHS 12
int main(int argc, char const *argv[])
{
	/**
	 * 统计2010-2014年的降水量初始化数组
	 * 	计算一年的总降水量
	 * 	计算平均的每月降水量
	 */
	const float rain[YEARS][MONTHS] = 
	{
		{0.2,0.5,0.7,0.1,1.0,0.8,0.1,0.9,0.2,0.7,1.0,0.9},
		{0.4,0.7,0.8,0.0,0.6,0.7,0.2,0.9,0.2,0.8,0.4,0.7},
		{0.1,0.6,0.4,0.2,0.4,0.6,0.4,0.9,0.8,0.8,0.9,0.1},
		{0.3,0.4,0.7,0.5,0.1,0.5,0.1,0.1,0.1,0.0,0.6,0.3},
		{0.0,0.4,0.8,0.3,1.0,0.2,0.5,0.5,0.1,0.9,0.5,0.5}
	};
	int year, month;
	float subtotal, total;
	for( year = 0, total = 0; year < YEARS; year++) {
		for( month = 0, subtotal = 0; month < MONTHS; month++) {
			subtotal += rain[year][month];
		}
		total += subtotal;
		printf("%5d %15.1f \n", 2010 + year, subtotal);
	}
	printf("total: %15.1f \n", total);
	return 0;
}




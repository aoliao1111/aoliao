//输入一行，出生日期，包括年月日，年月日之间的数字没分隔符
#include <stdio.h>
int main()
{
	int year = 0;
	int month = 0;
	int day = 0;
	scanf_s("%4d%2d%2d", &year, &month, &day);
	printf("year = %d\n", year);
	printf("month = %02d\n", month);
	printf("day = %02d\n", day);




	return 0;
}
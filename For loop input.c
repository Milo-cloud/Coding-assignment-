//For loop program

/*
AUTHOR:PETER NYONGESA
DATE:9/10/2024
REG NO:CT101/G/23516/24
*/

#include <stdio.h>
int main()
{
	int i, sum = 0, limit, start;

	printf("Enter Start:", start);
	scanf("%d", &start);

	printf("Enter limit:", limit);
	scanf("%d", &limit);

	for (i = start; i <= limit; i = i + 1)
	{
		printf("%d \n", i);
		sum = sum + i;
	}
	printf("The sum is:%d", sum);
	return 0;
}
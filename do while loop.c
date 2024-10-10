//do while loop user input 
/*
AUTHOR:PETER
DATE:8/10/2024
REG NO:CT101/G/23516/24
*/

#include <stdio.h>

int main() {
    int i=0,limit,sum=0;
    printf("Enter start:");
    scanf("%d",&i);
    
    printf("Enter limit:");
    scanf("%d",&limit);
    
    do {
    	printf("\n%d",i);
        sum =sum + i;
    	i++;
    	}
    	while (i<=limit);
printf ("sum is:%d",sum);
    return 0;
}
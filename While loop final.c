//while loop program that requires input

/*
AUTHOR:PETER
DATE:8/10/2024
REG NO:CT101/G/23516/24
*/


#include <stdio.h>
int main()
{
	int i,sum=0,input,square;
	
	//user input
	
	printf("Enter Start:",i);
	scanf("%d",&i);
	
	printf("Enter limit:",input);
	scanf("%d",&input);
	
	while (i<=input){// stop
		
		printf("%d\n",i);
		sum=sum + i;
		i++;//inceament
		
		}
	printf("Sum is:%d",sum);



	return 0;
}
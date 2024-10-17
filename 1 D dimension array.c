//1 dimension array
/*
AUTHOR:PETER
DATE:12/10/2024
REG NO:CT101/G/23516/24

*/
#include <stdio.h>
int main (){
	
	int age[4],i;
	
	//input
	printf("Enter 4 numbers:\n");//user prompt strings
	for (i=0;i<4;i++){
		
		scanf("%d",&age[i]);
		
		}
		
		//  for loop output
		printf("The entered numbers are:");
		for (i=0;i<4;i++){
			printf("%d ",age[i]);
		}
	
	
return 0;	
}
//2d array with for loop
/*
AUTHOR:PETER
DATE:12/10/2024
REG NO:CT101/G/23516/24

*/



#include <stdio.h>
int main (){
	
	int marks[2][3]={// this means there are 2rows each with 3 columns(2*3) matrix
		{1 , 3, 5},
		{2 , 4, 6}
		};
	
		int i,j; //declaration	
		for (i=0;i<2;i++){//for outer loop
			for(j=0;j<3;j++){//for inner loop 
				printf(" %d ",marks[i][j]);
				
				}
			printf("\n");//added to make output look like a matrix design 
		}

	
	

	
	
	
	
return 0;	
}
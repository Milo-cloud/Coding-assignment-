//3d array with for loop
/*
AUTHOR:PETER
DATE:12/10/2024
REG NO:CT101/G/23516/24

*/


#include <stdio.h>
int main (){
	
	int age[2][2][3]={ 
	                      {{1, 2, 3 },{ 4, 5, 6 }},
	                      {{7, 8, 9, },{10, 11, 12}}
	                      };
	
	
		int i,j,k; 	
		for (i=0;i<2;i++){
			for(j=0;j<2;j++){
				for (k=0;k<3;k++){
					printf(" %d ",age [i][j][k]);
					}
			printf("\n");
				
				}
		printf("\n");	//added to make output look like a matrix design 
		}

	
	

	
	
	
	
return 0;	
}
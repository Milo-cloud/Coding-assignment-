//program to calculate  simple interest
/*
AUTHOR:PETER
DATE:21/09/2024
REG NO:CT101/G/23516/24
*/
#include <stdio.h>
int main(){
	
	float p, r, t ,si  ;
	
	printf("Enter principal:");
	scanf("%f",& p);
	
	printf("Enter rate per annumn:");
	scanf("%f", &r);
	
	printf("Enter time in years:");
	scanf("%f", &t);
	
	si=(p*r*t)/100;
	printf("Simple interest is:%f",si);
	
		
return 0;	
}
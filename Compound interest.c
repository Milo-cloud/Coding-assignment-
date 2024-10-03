//Program to calculate compound interest
/*
AUTHOR:PETER NYONGESA
DATE:23/09/2024
REG NO:CT101/G/23516/24
*/
#include <stdio.h>
#include <math.h>
int main (){
	float p,r,t,ci,amt;
	
	printf("Enter principal:");
	scanf("%f" ,&p);
	
	printf("Enter rate:");
	scanf("%f" ,&r);
	
	printf("Enter time:");
	scanf("%f" ,&t);
	
	amt=p * pow(1+r/100,t);
	ci=amt-p;

    printf("\t......CALCULATION.....\n");
    printf("Amount is %.4f \n" ,amt);
	printf("Compound interest is %.4f \n"  ,ci);
	
	
	
	
	
	
	
return 0;	
}

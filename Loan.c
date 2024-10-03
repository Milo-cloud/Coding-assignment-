//program to implement loan requirements
/*AUTHOR:PETER
DATE:26/09/24
REG NO:CT101/G/23516/24
*/

#include <stdio.h>
int main(){
	int age ,annualincome ;
	
	printf("Enter your age:");
	scanf("%d" ,& age);
	
	printf("Enter your annual income:");
	scanf("%d" ,& annualincome);
	
	if( age >= 21 && annualincome>=21000){printf("Congratulations you qualify for a loan "); }

else {printf("Unfortunately, we are unable to offer you a loan at this time.");}


	
	 
	
	
	
	
	
return 0;	
}
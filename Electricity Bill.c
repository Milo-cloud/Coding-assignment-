// program to calculate electricity bill

/*
AUTHOR:PETER
DATE:7/10/2024
REG NO:CT101/G/23516/24
*/

#include <stdio.h>
int main() {
    int CustomerId;
    char CustomerName[50];
    float UnitsConsumed,charge,Total_Bill,surcharge=0.0,TotalAmount;
         //user input
    printf("Enter Customer Name:",                     CustomerName);    
    scanf("%s",&CustomerName);
    
    printf("Enter Customer Id:",CustomerId);
    scanf("%d",&CustomerId);
      
 printf("Enter units consumed:",   UnitsConsumed);                            scanf("%f",&UnitsConsumed);
 
       //if else statement declaration
       
if (UnitsConsumed==0){charge =0;}      
       
 if (UnitsConsumed>=1 && UnitsConsumed<=199){charge =1.20 ;}
 
 else if(UnitsConsumed>=200 && UnitsConsumed<400){charge =1.50 ;}
 
 else if (UnitsConsumed>=400 && UnitsConsumed<600){charge =1.80 ;}

else {charge =2.00 ;}

Total_Bill=(charge*UnitsConsumed);


if (Total_Bill>400){surcharge=Total_Bill*0.15;}
if(Total_Bill<100){Total_Bill=100;}

TotalAmount=Total_Bill+surcharge;

        //program output
        
printf("\n\t....CUSTOMER DETAILS.....");
printf("\nCustomer Name: %s",CustomerName);
printf("\nCustomer Id :%d",CustomerId);
printf("\nUnits Consumed:%.2f",UnitsConsumed);
printf("\nCharges Per Unit:%.2f",charge);
printf("\nTotal bill is %.2f",Total_Bill);
printf("\nTotal Amount Payable:%.2f",TotalAmount);
     

    return 0;
}
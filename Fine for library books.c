
//program to calculate the fine for overdue library books
/*
AUTHOR:PETER
DATE:27/09/2024
REG NO:CT101/G/23516/G
*/

#include <stdio.h>
int main(){
	int Book_Id,Due_Date,Return_Date,Days_overdue, fine_amount,fine_rate;
	
        	//User inputs
	
	printf("Enter your book Id:");
	scanf("%d", &Book_Id);
	
	printf("Enter Due Date:");
	scanf("%d", &Due_Date);
	
	printf("Enter Return Date:");
	scanf("%d", &Return_Date );
	
	// Days overdue formula
	
	Days_overdue=(Return_Date - Due_Date);

	
	      // assigning fine rates
	if (Days_overdue<=0){fine_rate=0;}
	
	if (Days_overdue<=7){fine_rate=20;}
		
	if (Days_overdue>=8 && Days_overdue<=14){ fine_rate=50;}
	
	if (Days_overdue>=15){fine_rate=100;}

	// fine amount formula
	
	fine_amount=fine_rate  *  Days_overdue;
	
	// Output display
	printf("\tBOOK DETAILS AND CHARGES\n");
	printf("Book Id:%d\n", Book_Id);
	printf("Due date:%d\n", Due_Date);
	printf("Return date:%d\n", Return_Date);
	printf("Days overdue:%d\n", Days_overdue);
	printf("Fine rate: Ksh %d\n", fine_rate);
	printf("\nYour fine amount is:Ksh %d \n" ,fine_amount);
return 0;		
}
#include <stdio.h>

/* Write a program that asks the user to enter a U.S. dollar amount
 * and then shows how to pay that amount using the smallest number of
 * $20, $10, $5, and $1 dollar bills
 */
 


int main(void){
    int amount,rem,rem1,rem2,rem3,newamt,newamt1,newamt2;
    printf("Enter the amount");
    scanf("%d",&amount);
    rem=amount/20;
    newamt=amount-(20*rem);
    rem1=newamt/10;
    newamt1=newamt-(10*rem1);
    rem2=newamt1/5;
    newamt2=newamt1-(5*rem2);
    rem3=newamt2/1;


    printf("20$ bill = %d \n",rem);
    printf("10$ bill = %d \n",rem1);
    printf("5$ bill = %d \n",rem2);
    printf("1$ bill = %d \n",rem3);
    

    return 0;
}


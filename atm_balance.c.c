/*
nameibrahim osman
reg no:PA106/G/28841/25
description:while loop program about bank withrawal
*/
#include<stdio.h>

int main(){
	  int amount;
	  int balance=500;
	  printf("your current_balance is%d\n",balance);
	  while(balance>0){
	  	printf("enter amount to withdraw");
	  scanf("%d",&amount);
	  balance=balance-amount;
	  
	 
	 printf("balance is%d\n",balance); 
}
printf("insuficient balance");
	return 0;
}
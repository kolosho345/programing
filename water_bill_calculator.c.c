/*
name:ibrahim osman
reg no:PA106/G/28841/25
description:c program about water bill calculator
*/
#include<stdio.h>
int main(){
	int units_number;
	int total_bill (KES);
	
	printf("enter units_number");
	scanf("%d",& units_number);
	
	if (units_number<=30){
		total_bill=units_number*20;
		printf("your total_bill is %d",total_bill);}
		else if(units_number>30 && units_number<=60){
			total_bill=units_number*25;
			printf("your total_bill is%d",total_bill);
		}
		else{total_bill=units_number*30;
		printf("your total_bill is%d",total_bill);
			
	}
	
	return 0;
}
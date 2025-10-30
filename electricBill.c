/* 
name:ibrahim osman
regno:PA106/28841/25
description:program creating function called calculateElectricBill()
*/


#include<stdio.h>
float calculateElectricBill(float bill){
	return bill;
	
}
int main(){
	int units;
	float bill;
	printf("enter number of units consumed\n");
	scanf("%d",&units);
	
	if(units>0 && units<=100){
		bill=units*10;
		printf("total_bill= ksh.%f\n",bill);
	}else if(units>100 && units<=200){
		bill=units*15;
		printf("total_bill= ksh. %f\n",bill);
	}else{
		bill=units*20;
		printf("total_bill= ksh.f\n",bill);
	}
	
	calculateElectricBill(bill);
	return 0;
}
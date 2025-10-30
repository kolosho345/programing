/*
name:ibrahim osman
regno:PA106/G/28841/25
description:creating function calculteFare()
*/


#include<stdio.h>
float calculateFare(float fare){
	return fare;
}

int main(){
float distance;
float fare;

printf("enter total distance travelled\n");
scanf("%f",&distance);

fare=distance*50;

printf("total fare = ksh. %f\n",fare);	
	calculateFare( fare);
	return 0;
}
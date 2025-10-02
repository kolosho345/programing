/*
name:ibrahim osman kolosho
Reg No:PA106/G/28841/25
Description:program about qualification for a loan
*/
#include<stdio.h>
 
 int main(){
 	int age;
 	float income;
 	
 	printf("enter age\n");
 	scanf("%d",&age);
 	printf("enter income\n");
 	scanf("%f",&income);
 	
 	if(age>=21 && income>=21000) {
		 printf("congratulations you qualify a loan\n");
	 } else {
		 printf("unfortunately we are unable to offer a loan at this time\n");
	 }
 	 
 	 return 0;
 }

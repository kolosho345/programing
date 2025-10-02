/*
name:ibrahim osman
reg no:PA106/G/28841/25
description:c program abouf eligibility for final exam
*/

#include<stdio.h>
int main(){
 int average_marks;
 int attendance;
 
 printf("enter the attendance in %\t");
 scanf("%d",&attendance);
 printf("enter average_marks\t");
 scanf("%d", &average_marks);
 
 if (attendance>=75 && average_marks>=40){
	 printf("eligible for final exam\n");
 }
 else{
	 printf("not eligible for final exam\n");
 }
	
	return 0;
}

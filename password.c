/*
name:ibrahim osman
reg no:PA106/G/28841/25
discription:program about password
*/
#include<stdio.h>
int main(){
	int password;
	
	do{
		printf("enter password");
		scanf("%d",&password);
		
	}while(password!=1234);
	printf("access granted\n");
	return 0;
}
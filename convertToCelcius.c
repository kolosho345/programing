/*
name:ibrahim osman
regno:PA106/G/28841/25
description:creating function convertToCelcius()

*/
#include<stdio.h>
float convertToCelcius(float celcius){
	return celcius;
}
int main(){
float celcius;
float fahrenheit;

printf("enter temperature in fahrenheit\n");
scanf("%f",& fahrenheit);

celcius=(fahrenheit-32)*5/9;
printf("temperature in celcius= %f 'C\n",celcius);
	
	convertToCelcius(celcius);

	
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
 const int MIN=1;	
const int MAX=20;
int guess;
int answer;
int guesses;
     srand(time(0));
     answer=(rand()%MAX)+MIN;
    // printf("answere%d",answer);
     
     do{
		 printf("enter guess\n");
		 scanf("%d",&guess);
		 
	
if(guess>answer){
	printf("too high\n");
}else if(guess <answer){
	printf("too low\n");
}else{
	printf("congratulations\n");
	}
	
guesses++;	

	 }while(guess!=answer);
		 printf("answer is :%d\n",answer);
		 printf("guesses is :%d\n",guesses);
	 
	return 0;
}
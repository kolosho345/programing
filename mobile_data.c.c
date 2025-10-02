/*
name:ibrahim osman
reg no:PA106/G/28841/25
description:
*/
#include<stdio.h>
int main(){
	int choice;
printf("select data bundle\n");
printf("1.100MB @50 KES 50\n");
printf("2.500MB @200 KES 200\n");
printf("3. 1GB @ 350\n");
printf("4. 2GB @ 600 KES\n");

printf("enter your choice (1-4)");
scanf("%d",&choice);

switch(choice){
	case 1:
		printf("you selected 100MB. cost=50 KES\n");
		         break;
		     case 2:
    	printf("you selected 500MB. cost=200 kes\n");
    	        break;
    	    case 3:
     printf("you selected 1GB. cost=350\n");
          break;
      case 4:
      	printf("you selected 2GB. cost=600\n");
      	      break;
      	  default:
      	  	printf("invalid choice\n");
      	  	break;

}

	

	return 0;
}
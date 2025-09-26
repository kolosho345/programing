/* 
name:ibrahim osman
Reg No:PA106/G/28841/25
Description:program for calculation of volume and surface area of cylinder  
*/      
#include<stdio.h>

int main(){
const double PI=3.14159;
double radius;
double height;
double volume;
double surfacearea;

printf("enter radius \n");
scanf("%lf", &radius);
printf("enter height\n");
scanf("%lf",&height);

volume=PI*radius*radius*height;
surfacearea=2*PI*radius*radius + 2*PI*radius*height;

printf("volume:%lf\n",volume);
printf("surfacearea:%lf\n",surfacearea);

return 0;

}

/*
name:Ibrahim osman
regno:PA106/G/28841/25
*/
#include <stdio.h>
#include<string.h>
struct studentResults {
char name[90];
char regNumb [80]; int marks;
};
int main (){
FILE *jB = fopen ("results.dat", "rb");
if(jB!=NULL){
printf ("File openedsuccessfully\n");
}else{
printf ("File unable to open\n");
}
char buffer[300];
while(
fgets(buffer,300,jB)!= NULL){
printf("%s", buffer);
}
struct studentResults student1 ;
struct studentResults student2 ;
strcpy (student1.name,"Abdiweli");
strcpy(student1.regNumb,"PA106/G/28845/25");
student1.marks = 55;
strcpy (student2.name,"Abdulaziz");
strcpy(student2.regNumb,"PA106/G/28849/25");
student2.marks = 59;

fclose(jB);
return 0;
}
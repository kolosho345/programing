
/*
name:Ibrahim osman
regno:PA106/G/28841/25
*/

#include<stdio.h>

int main()
{
FILE *fP= fopen("borrowed_books.txt",  "a");

char name[200];

printf("Enter the book title\t");
fgets(name,200,stdin);
name[strlen(name)-1];
printf("file added\n");
fprintf(fP, "%s", name);
fclose(fP);
    return 0;
}
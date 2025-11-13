/*
Name: Ibrahim osman
regno:PA106/G/28841/25
*/

#include <stdio.h>

int main() {
    FILE *file;
    float amount, total = 0.0;

    
    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open sales.txt\n");
        
    }else{
    printf("File opened successfully\n");
    }

    
    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }

    
    fclose(file);

    
    printf("Total Sales for the Day: %.2f\n", total);

    return 0;
}
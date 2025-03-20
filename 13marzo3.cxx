#include <stdio.h>

int main() {
    int vector[100];  
    int i = 0, num =100;  

    
    while (i < 100) {
        vector[i] = num;
        num -= 1;  
        i++;
    }

    i = 0;  

    
    while (i < 100) {
        printf("1 * %d = %d\n", 100 - i, vector[i]);  
        i++;
    }

    return 0;
}
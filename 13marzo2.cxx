#include <stdio.h>

int main() {
    
    int A[] = {3, 5, 6, 8, 4, 7, 8, 5, 3, 1};
    int B[] = {3, 4, 6, 8, 9, 1, 2, 3, 0, 9};

    
    int resultado1 = A[3] % (B[2] / 2); 
       
    
       
    int resultado3 = A[0] + A[1 + 2];  
    int resultado4 = A[5] + B[5];  
    int resultado5 = (A[3] / B[2]) / 2;

    
    printf("Resultado 1: %d\n", resultado1);
    
    printf("Resultado 3: %d\n", resultado3);
    printf("Resultado 4: %d\n", resultado4);
    printf("Resultado 5: %d\n", resultado5);

int  i = 0 ;
while (i<10){
	B[i]=B[i] * A[1]-A[9];
	printf("%d\n ", B[i]);
	i++;
}

    return 0;
}
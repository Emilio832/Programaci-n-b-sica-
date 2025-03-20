#include <stdio.h>

int main() {
    printf("▪ Imprimir los cuadrados y los cubos de los primeros quinientos números naturales.\n\n");
    
    printf("▪ El cuadrado de un número se define como: x^2 = x * x\n");
    printf("▪ El cubo de un número se define como: x^3 = x * x * x\n\n");

    printf("La salida debe ser la siguiente:\n\n");

    int i = 1;
    while (i <= 500) {
        printf("%d, %d, %d\n", i, i * i, i * i * i);
        i++;
    }

    return 0;

}
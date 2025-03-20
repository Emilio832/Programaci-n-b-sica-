#include <stdio.h>

int main() {
    int antiguedad;
    int sueldo, porcentaje;

    
    printf("Ingrese su antigüedad en años: ");
    scanf("%d", &antiguedad);

    
    printf("Ingrese su sueldo mensual: ");
    scanf("%f", &sueldo);

    
    porcentaje = (sueldo * 100) / 10;

    
    if (antiguedad >= 5  && porcentaje > 1000) {
        printf("Usted es sujeto a un crédito hipotecario.\n");
    } else {
        printf("No cumple con los requisitos para un crédito hipotecario.\n");
    }

    return 0;

}
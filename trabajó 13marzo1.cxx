
#include <stdio.h>

int main() {
    int arreglo[20];
    int suma = 0;
    int multiplicacion = 1; 
    int i = 0;
   while( i < 20 ) {
        
        arreglo[i] = i + 1;
        suma += arreglo[i];
        multiplicacion *= arreglo[i];
        
        i++;
    }

    
    int promedio = suma / 20.0;  

    
    
    printf("Promedio de los elementos: %.2f\n", promedio);
    printf("Multiplicación de todos los elementos: %lld\n", multiplicacion);

    return 0;
}
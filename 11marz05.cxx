#include <stdio.h>

int main() {
    int vector[100];  // Arreglo con 100 posiciones
    int i = 0;

    // Llenar el arreglo con la tabla del 2 desde 2 * 1 hasta 2 * 100
    while (i < 100) {
        vector[i] = 2 * (i + 1);  // Empezar en 2 * 1
        i++;
    }

    i = 0;  // Reiniciar contador para mostrar los valores

    // Mostrar el arreglo en pantalla en formato de tabla de multiplicar
    while (i < 100) {
        printf("2 * %d = %d\n", i + 1, vector[i]);  // Mostrar 2 * (i + 1)
        i++;
    }

    return 0;
}
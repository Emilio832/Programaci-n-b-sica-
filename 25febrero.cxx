#include <stdio.h>

int main() {
    int calificacion;
    
    
    printf("Ingresa la calificación del examen: ");
    scanf("%d", &calificacion);
    
    
    if (calificacion >= 8) {
        printf("¡Felicidades aprobaste el curso!\n");
    }
    
    return 0;

}
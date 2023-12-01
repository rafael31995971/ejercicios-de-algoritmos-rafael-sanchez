#include <stdio.h>
#include <stdlib.h>

float calcularAreaRectangulo(float longitud, float ancho) {
    float area = longitud * ancho;
    return area;
}

int main() {
    float longitud, ancho;

    printf("Ingrese la longitud del rectángulo: ");
    scanf("%f", &longitud);

    printf("Ingrese el ancho del rectángulo: ");
    scanf("%f", &ancho);

    float area = calcularAreaRectangulo(longitud, ancho);

    printf("El área del rectángulo con longitud %.2f y ancho %.2f es %.2f\n", longitud, ancho, area);

    return 0;
}

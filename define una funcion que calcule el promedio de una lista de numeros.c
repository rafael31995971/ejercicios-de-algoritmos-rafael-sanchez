#include <stdio.h>
#include <stdlib.h>

float calcularPromedio(int numeros[], int longitud) {
    int i;
    float suma = 0;

    // Calcular la suma de todos los números
    for (i = 0; i < longitud; i++) {
        suma += numeros[i];
    }

    // Calcular el promedio dividiendo la suma entre la longitud
    float promedio = suma / longitud;

    return promedio;
}

int main() {
    int lista[] = {5, 10, 15, 20, 25};
    int longitud = sizeof(lista) / sizeof(lista[0]);

    float promedio = calcularPromedio(lista, longitud);

    printf("El promedio es: %.2f\n", promedio);

    return 0;
}




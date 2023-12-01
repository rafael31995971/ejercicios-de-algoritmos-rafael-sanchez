#include <stdio.h>
#include <stdlib.h>

int esPrimo(int num) {
    int i;

    // Si el n�mero es menor o igual a 1, no es primo
    if (num <= 1) {
        return 0;
    }

    // Verificar si el n�mero es divisible por alg�n otro n�mero
    for (i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            return 0; // No es primo
        }
    }

    return 1; // Es primo
}

int main() {
    int numero;

    printf("Ingrese un n�mero: ");
    scanf("%d", &numero);

    if (esPrimo(numero)) {
        printf("%d es un n�mero primo.\n", numero);
    } else {
        printf("%d no es un n�mero primo.\n", numero);
    }

    return 0;
}



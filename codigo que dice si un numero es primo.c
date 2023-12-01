#include <stdio.h>
#include <stdlib.h>

int esPrimo(int num) {
    int i;

    // Si el número es menor o igual a 1, no es primo
    if (num <= 1) {
        return 0;
    }

    // Verificar si el número es divisible por algún otro número
    for (i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            return 0; // No es primo
        }
    }

    return 1; // Es primo
}

int main() {
    int numero;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    if (esPrimo(numero)) {
        printf("%d es un número primo.\n", numero);
    } else {
        printf("%d no es un número primo.\n", numero);
    }

    return 0;
}



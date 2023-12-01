#include <stdio.h>
#include <stdlib.h>

int esPolindromo(char palabra[]) {
    int longitud = strlen(palabra);

    for (int i = 0; i < longitud / 2; i++) {
        if (palabra[i] != palabra[longitud - i - 1]) {
            return 0; // No es un pol�ndromo
        }
    }

    return 1; // Es un pol�ndromo
}

int main() {
    char palabra[100];

    printf("Ingrese una palabra: ");
    scanf("%s", palabra);

    if (esPolindromo(palabra)) {
        printf("La palabra \"%s\" es un pol�ndromo.\n", palabra);
    } else {
        printf("La palabra \"%s\" no es un pol�ndromo.\n", palabra);
    }

    return 0;
}


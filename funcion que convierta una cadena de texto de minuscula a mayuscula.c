#include <stdio.h>
#include <stdlib.h>


void convertirAMayuscula(char cadena[]) {
    int i = 0;

    while (cadena[i] != '\0') {
        cadena[i] = toupper(cadena[i]);
        i++;
    }
}

int main() {
    char texto[100];

    printf("Ingrese un texto: ");
    fgets(texto, sizeof(texto), stdin);

    convertirAMayuscula(texto);

    printf("Texto en mayúscula: %s\n", texto);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int contarDigitos(int numero) {
    int contador = 0;

    while (numero != 0) {
        numero /= 10; // Eliminar el último dígito del número
        contador++; // Incrementar el contador de dígitos
    }

    return contador;
}

int main() {
    int numero;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    int cantidadDigitos = contarDigitos(numero);

    printf("La cantidad de dígitos es: %d\n", cantidadDigitos);

    return 0;
}




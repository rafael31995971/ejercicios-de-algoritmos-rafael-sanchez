#include <stdio.h>
#include <stdlib.h>

int contarDigitos(int numero) {
    int contador = 0;

    while (numero != 0) {
        numero /= 10; // Eliminar el �ltimo d�gito del n�mero
        contador++; // Incrementar el contador de d�gitos
    }

    return contador;
}

int main() {
    int numero;

    printf("Ingrese un n�mero: ");
    scanf("%d", &numero);

    int cantidadDigitos = contarDigitos(numero);

    printf("La cantidad de d�gitos es: %d\n", cantidadDigitos);

    return 0;
}




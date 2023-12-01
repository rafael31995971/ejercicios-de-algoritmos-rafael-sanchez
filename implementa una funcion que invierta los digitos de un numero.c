#include <stdio.h>
#include <stdlib.h>



    int invertirDigitos(int numero) {
    int invertido = 0;

    while (numero != 0) {
        int digito = numero % 10; // Obtener el �ltimo d�gito
        invertido = invertido * 10 + digito; // Agregar el d�gito al n�mero invertido
        numero /= 10; // Eliminar el �ltimo d�gito del n�mero original
    }

    return invertido;
}

int main() {
    int numero;

    printf("Ingrese un n�mero: ");
    scanf("%d", &numero);

    int numeroInvertido = invertirDigitos(numero);

    printf("El n�mero invertido es: %d\n", numeroInvertido);

    return 0;
}


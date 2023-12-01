#include <stdio.h>
#include <stdlib.h>



    int invertirDigitos(int numero) {
    int invertido = 0;

    while (numero != 0) {
        int digito = numero % 10; // Obtener el último dígito
        invertido = invertido * 10 + digito; // Agregar el dígito al número invertido
        numero /= 10; // Eliminar el último dígito del número original
    }

    return invertido;
}

int main() {
    int numero;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    int numeroInvertido = invertirDigitos(numero);

    printf("El número invertido es: %d\n", numeroInvertido);

    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main()
{  int numero, i;

    printf("Ingresa un n�mero: ");
    scanf("%d", &numero);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;

}

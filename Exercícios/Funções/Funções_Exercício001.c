#include <stdio.h>

int Impar(int numero);
int main(void)

{ int numero;
    printf("Informe o numero: ");
    scanf("%d", &numero);
    
        if (Impar(numero) == 1)
            printf("\nO número %d é impar.\n", numero);
        else
            printf("\nO número %d é par.\n", numero);
    return 0;
}

int Impar(int numero)
{
    numero = numero % 2;
    return numero;
}
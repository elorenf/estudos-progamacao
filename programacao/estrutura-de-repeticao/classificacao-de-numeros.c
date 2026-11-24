#include <stdio.h>
int main()
{
    int numero, positivo, negativo;

    positivo = 0;
    negativo = 0;

    do
    {
        printf("\nDigite um numero inteiro (0 para encerrar):");
        scanf("%d", &numero);

        if (numero > 0)
        {
            positivo++;
        }
        else if (numero < 0)
        {
            negativo++;
        }

    } while (numero != 0);

    printf("\nA quantidade de numeros positivos foram:%d ", positivo);
    printf("\nA quantidade de numeros negativos foram:%d ", negativo);

    return 0;
}
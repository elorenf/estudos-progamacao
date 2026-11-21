#include <stdio.h>
int main()
{
    int numero, contador, pares, impares;

    pares = 0;
    impares = 0;

    for (contador = 1; contador <= 10; contador++)
    {
        printf("Digite um numero inteiro:\n");
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {

            pares = pares + 1;
        }
        else
        {
            impares = impares + 1;
        }
    }
    printf("a quantidade de pares são:%d \n", pares);
    printf("a quantidade de impares são:%d \n", impares);

    return 0;
}
#include <stdio.h>
int main()
{
    int numero, pares, impares;
    pares = 0;
    impares = 0;

    printf("Ache o número da sorte, digite seu palpite de 0 a 10:\n");
    scanf("%d", &numero);

    while (numero != 0)
    {

        if (numero % 2 == 0)
        {
            pares++;
        }
        if (numero % 2 != 0)
        {
            impares++;
        }

        printf("Que pena, esse não é o número, tente novamente!\n");
        scanf("%d", &numero);
    }
    printf("Esses foram todos os numeros impares digitados:%d\n", impares);
    printf("Esses foram todos os numeros pares digitados:%d\n", pares);

    return 0;
}
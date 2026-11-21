#include <stdio.h>
int main()
{
    int contador, soma, numero;

    contador = 0;
    soma = 0;

    while (contador <= 5)
    {
        printf("Digite um número:\n");
        scanf("%d", &numero);

        contador++;
        soma = soma + numero;
    }
    printf("A soma dos numeros são:%d\n", soma);
    return 0;
}
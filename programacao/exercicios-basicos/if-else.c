#include <stdio.h>
int main()
{
    int idade;

    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("Maior de Idade");
    }
    else
    {
        printf("Menor de Idade");
    }

    return 0;
}
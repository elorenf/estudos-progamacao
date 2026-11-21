#include <stdio.h>
int main()
{
    int nota;

    printf("Digite a nota:");
    scanf("%d", &nota);

    if (nota < 7)
    {
        printf("Reprovado");
    }
    else if (nota < 9)
    {
        printf("Aprovado");
    }
    else
    {
        printf("Aprovado com louvor!");
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int idade;

    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    if (idade < 18)
    {
        printf("Menor de idade");
    }
    else
    {
        if (idade < 59)
        {
            printf("Adulto");
        }
        else
        {
            printf("Idoso");
        }
    }
    return 0;
}

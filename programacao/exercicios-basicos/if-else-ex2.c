#include <stdio.h>
int main()
{
    float nota1, nota2, notas;

    printf("Digite sua primeira nota:\n");
    scanf("%f", &nota1);

    printf("Digite sua segunda nota:\n");
    scanf("%f", &nota2);

    notas = (nota1 + nota2) / 2;

    printf("Media: %.2f\n", notas);

    if (notas >= 7)
    {
        printf("Aprovado");
    }
    else
    {
        printf("Reprovado");
    }
}
#include <stdio.h>
int main()
{
    int acumulador, soma;
    soma = 0;

    for (acumulador = 1; acumulador <= 10; acumulador++)
    {
        soma = soma + acumulador;
    }
    printf("Esses são os números somados:%d\n", soma);
    return 0;
}
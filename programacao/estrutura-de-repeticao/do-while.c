#include <stdio.h>
int main()
{
    int numero;

    numero = 1;

    do
    {
        printf("Esses foram os numeros de 1 a 5: %d\n", numero);

        numero++;
    } while (numero <= 5);
    return 0;
}

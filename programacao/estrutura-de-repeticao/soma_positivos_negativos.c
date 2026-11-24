#include <stdio.h>
int main()
{
    int numero, somapositivo, somanegativo;

    somapositivo = 0;
    somanegativo = 0;

    do
    {
        printf("Digite um numero (0 encerra o programa):");
        scanf("%d", &numero);

        if (numero > 0)
        {
            somapositivo = somapositivo + numero;
        }
        else if (numero < 0)
        {
            somanegativo = somanegativo + numero;
        }
    } while (numero != 0);
    printf("A soma dos numeros positivos são: %d", somapositivo);
    printf("\nA soma dos numeros negativos sao:%d", somanegativo);
}
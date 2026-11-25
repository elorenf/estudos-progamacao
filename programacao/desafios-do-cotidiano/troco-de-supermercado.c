#include <stdio.h>
int main()
{
    float total, valorentregue, troco;

    troco = 0;

    printf("Digite o valor total da compra: ");
    scanf("%f", &total);

    printf("Digite o valor do pagamento: ");
    scanf("%f", &valorentregue);

    if (valorentregue > total)
    {
        troco = valorentregue - total;
        printf("Troco: %.2f", troco);
    }
    else if (valorentregue == total)
    {
        printf("Pagamento exato!");
    }
    else
    {
        troco = total - valorentregue;
        printf("Falta a pagar. O valor faltante e: %.2f", troco);
    }

    return 0;
}
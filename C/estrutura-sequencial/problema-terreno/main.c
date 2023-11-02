#include <stdio.h>
#include <stdlib.h>

int main()
{

    float largura, comprimento, valor;
    printf("Digite a largura do terreno: ");
    scanf("%f", &largura);
    printf("Digite o comprimento do terreno: ");
    scanf("%f", &comprimento);
    printf("Digite o valor do metro quadrado: ");
    scanf("%f", &valor);

    printf("Area do terreno = %.2f\n", largura * comprimento);
    printf("Preco do terreno = %.2f\n", largura * comprimento * valor);

    return 0;
}

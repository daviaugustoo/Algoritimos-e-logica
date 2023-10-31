#include <stdio.h>
#include <stdlib.h>

int main()
{
    int produtos;
    printf("Serao digitados dados de quantos produtos: ");
    scanf("%i", &produtos);

    char nome [produtos][50];
    float valorCompra[produtos], valorVenda[produtos];
    float lucro, lucroMenor = 0, lucroEntre = 0, lucroMaior = 0;
    float totalLucro = 0, totalCompra = 0, totalVenda = 0;

    for(int i = 0; i < produtos; i++){
        printf("\nProduto %i\n", i + 1);
        printf("Nome: ");
        scanf("%s", &nome[i][0]);
        printf("Preco de compra: ");
        scanf("%f", &valorCompra[i]);
        printf("Preco de compra: ");
        scanf("%f", &valorVenda[i]);

        totalCompra += valorCompra[i];
        totalVenda += valorVenda[i];

        lucro = valorVenda[i] - valorCompra[i];
        totalLucro += lucro;

        if(lucro < valorCompra[i] / 10){
            lucroMenor++;
        }
        else if(lucro < valorCompra[i] * 20 / 100){
            lucroEntre++;
        } else{
            lucroMaior++;
        }
    }

    printf("\nRELATORIO:\n");
    printf("Lucro abaixo de 10%%:\t %.0f\n", lucroMenor);
    printf("Lucro entre 10%% e 20%%:\t %.0f\n", lucroEntre);
    printf("Lucro acima de 20%%:\t %.0f\n", lucroMaior);
    printf("Valor total de compra:\t %.2f\n", totalCompra);
    printf("Valor total de venda:\t %.2f\n", totalVenda);
    printf("Lucro total:\t %.2f\n", totalLucro);


    return 0;
}

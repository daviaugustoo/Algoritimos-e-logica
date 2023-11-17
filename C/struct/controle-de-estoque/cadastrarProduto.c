#include "cadastrarProduto.h"
#include <stdio.h>

int total = 0;

void menu(){

    int escolha;

    while(1){

        printf("\n\n");
        printf("1 - Cadastrar Produto\n2 - Remover Produto\n3 - Exibir produto\n\n0 - SAIR\n\n");

        printf("Digite sua escolha: ");
        scanf("%i", &escolha);
        printf("\n\n");

        switch (escolha){
            case 0:
                return;
                break;
            case 1:
                adicionarProduto();
                total++;
                break;
            case 2:
                removerProduto();
                break;
            case 3:
                exibirPodruto();
                break;
            default:
                printf("\nOPCAO INVALIDA\n\n");
                menu();
                break;
        }
    }
}

void adicionarProduto(){

    printf("Digite o codigo do produto: ");
    scanf("%i", &produtos[total].codigo);

    printf("Digite a quantidade do produto: ");
    scanf("%i", &produtos[total].quantidade);

    printf("Digite o preco do produto: ");
    scanf("%lf", &produtos[total].preco);

    printf("\n\n");
}

void removerProduto(){
    int codigo;
    printf("Digite o codigo do produto que deseja excluir: ");
    scanf("%i", &codigo);

    if(codigo == produtos[0].codigo){
            produtos[0].codigo = 0;
            produtos[0].quantidade = 0;
            produtos[0].preco = 0;
    }

    for(int i = 0; i < total; i++)
    {
        if(codigo == produtos[i].codigo){
            produtos[i].codigo = 0;
            produtos[i].quantidade = 0;
            produtos[i].preco = 0;
        }
    }
}

void exibirPodruto(){
    for(int i = 0; i < total; i++){
        printf("\n\n");
        printf("Codigo: %i\n", produtos[i].codigo);
        printf("Quantidade: %i\n", produtos[i].quantidade);
        printf("Preco: %.2lf", produtos[i].preco);
    }

}




#include <stdio.h>
#include <stdlib.h>

// Crie uma struct Livro que armazene informações como título, autor e ano de publicação.
// Escreva um programa que permita cadastrar vários livros e exiba as informações cadastradas.

struct Livro{
    char titulo[50];
    char autor[50];
    int ano;
};
struct Livro livros[50];

void limparbuffer(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

void cadastrarLivro(total);
void exibirDados(total);

int main()
{
    int escolha;
    int total = 0;
    while(1){
        printf("\n\n");
        printf("1 - Cadastrar Livro\n2 - Exibir dados\n\n0 - SAIR\n\nDigite sua escolha: ");
        scanf("%i", &escolha);

        switch (escolha){
            case 0:
                return 0;
                break;
            case 1:
                cadastrarLivro(total);
                total++;
                break;
            case 2:
                exibirDados(total);
                break;
            default:
                printf("\n\nOPCAO INVALIDA");
                break;
        }
    }
    return 0;
}


void cadastrarLivro(total){
    printf("\n\n");
    printf("Titulo: ");
    scanf(" %[^\n]s", livros[total].titulo);
    limparbuffer();

    printf("Autor: ");
    scanf(" %[^\n]s", livros[total].autor);
    limparbuffer();

    printf("Ano de lancamento: ");
    scanf(" %i", &livros[total].ano);
    limparbuffer();
}

void exibirDados(total){
    for(int i = 0; i < total; i++){
        printf("\n\n");
        printf("Titulo: %s\n", livros[i].titulo);
        printf("Autor: %s\n", livros[i].autor);
        printf("Ano de lancamento: %i", livros[i].ano);
    }
}

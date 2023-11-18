#include <stdio.h>
#include <stdlib.h>

// Defina uma struct Carro com campos para modelo, ano de fabricação e cor. Em seguida,
// implemente um programa que permita ao usuário cadastrar carros e visualizar as informações registradas.

struct Carro{
    char modelo[50];
    int ano;
    char cor[50];
};
struct Carro carros[50];

void limparbuffer(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

void cadastrarCarro(total);
void exibirDados(total);

int main()
{
    int escolha;
    int total = 0;

    while(1){
        printf("\n\n");
        printf("1 - Cadastrar Carro\n2 - Exibir dados\n\n0 - SAIR\n\nDigite sua escolha: ");
        scanf("%i", &escolha);

        switch (escolha){
            case 0:
                return 0;
                break;
            case 1:
                cadastrarCarro(total);
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

void cadastrarCarro(total){
    printf("\n\n");

    printf("Modelo: ");
    scanf(" %[^\n]s", carros[total].modelo);
    limparbuffer();

    printf("Ano de fabricacao: ");
    scanf(" %i", &carros[total].ano);
    limparbuffer();

    printf("Cor: ");
    scanf(" %[^\n]s", carros[total].cor);
    limparbuffer();
}

void exibirDados(total){
    for(int i = 0; i < total; i++){
        printf("\n\n");
        printf("Modelo: %s\n", carros[i].modelo);
        printf("Ano de fabricacao: %i\n", carros[i].ano);
        printf("Cor: %s", carros[i].cor);
    }
}

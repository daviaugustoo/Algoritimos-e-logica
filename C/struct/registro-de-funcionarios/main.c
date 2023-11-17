#include <stdio.h>
#include <stdlib.h>

// Desenvolva um programa que utilize uma struct chamada Funcionario com campos para nome, cargo e salário. Crie funções para cadastrar e exibir os dados de funcionários.

struct Funcionario{
    char nome[50];
    char cargo[50];
    float salario;
};
 struct Funcionario funcionarios[50];

 int totalFuncionarios = 0;

 void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void menu();
void cadastrarFuncionario();
void exibirFuncionarios();

int main()
{
    menu();
    return 0;
}

void menu(){
    int escolha;
    while(1){
        printf("0 - Cadastrar novo funcionario\n1 - Exibir funcionarios cadastrados\n3 - SAIR\nDigite a sua escolha: ");
        scanf("%i", &escolha);

        printf("\n\n");

        switch (escolha){
            case 0:
                cadastrarFuncionario();
                break;
            case 1:
                exibirFuncionarios();
                break;
            case 3:
                return 0;
                break;
            default:
                printf("\n\nOPCAO INVALIDA\n\n");
                menu();
                break;
        }
    }
}

 void cadastrarFuncionario(){
    printf("Digite o nome do funcionario: ");
    scanf(" %[^\n]s", funcionarios[totalFuncionarios].nome);
    limparBuffer();

    printf("Digite o cargo do funcionario: ");
    scanf(" %[^\n]s", funcionarios[totalFuncionarios].cargo);
    limparBuffer();

    printf("Digite o salario do funcionario: ");
    scanf("%f", &funcionarios[totalFuncionarios].salario);
    limparBuffer();

    printf("\n\n");

    totalFuncionarios++;
 }

  void exibirFuncionarios(){
    printf("Os dados registrados foram:\n\n");
    for(int i = 0; i < totalFuncionarios; i++){
        printf("Nome: %s\n", funcionarios[i].nome);
        printf("Cargo: %s\n", funcionarios[i].cargo);
        printf("Salario: R$%.2f\n", funcionarios[i].salario);
        printf("\n\n");
    }
 }

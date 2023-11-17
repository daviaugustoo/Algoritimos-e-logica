#include <stdio.h>
#include <stdlib.h>

struct Aluno {
    char nome[50];
    int matricula;
    float nota;
};

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    struct Aluno alunos[50];
    int sair;
    int contadorAlunos = 0;

    do {
        printf("0 - Sair\n1 - Continuar\nDigite sua escolha: ");
        scanf("%i", &sair);
        printf("\n");

        if (sair == 1) {
            if (contadorAlunos < 50) {
                printf("Digite o nome do aluno: ");
                scanf(" %[^\n]", alunos[contadorAlunos].nome);
                limparBuffer();

                printf("Digite a matricula do aluno: ");
                scanf("%i", &alunos[contadorAlunos].matricula);
                limparBuffer();

                printf("Digite a nota do aluno: ");
                scanf("%f", &alunos[contadorAlunos].nota);
                limparBuffer();

                printf("\n\n");

                contadorAlunos++;
            } else {
                sair = 0;
            }
        }
    } while (sair != 0);

    printf("\n\nOs dados registrados foram:\n\n");

    for (int i = 0; i < contadorAlunos; i++) {
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matricula: %i\n", alunos[i].matricula);
        printf("Nota: %.2f\n\n", alunos[i].nota);
    }

    printf("Programa encerrado. Obrigado por usar nosso sistema!\n");

    return 0;
}

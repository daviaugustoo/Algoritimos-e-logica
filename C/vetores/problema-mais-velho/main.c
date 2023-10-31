#include <stdio.h>
#include <stdlib.h>

int main() {
    int pessoas, idadeMaior = 0;
    printf("Quantas pessoas vai digitar? ");
    scanf("%d", &pessoas);

    char nome[pessoas][50];
    int idade[pessoas];

    for (int i = 0; i < pessoas; i++) {
        printf("Dados da %da pessoa:\n", i + 1);
        printf("Nome: ");
        scanf("%s", nome[i]);
        printf("Idade: ");
        scanf("%d", &idade[i]);

        if (idade[i] > idadeMaior) {
            idadeMaior = idade[i];
        }
    }

    printf("PESSOA MAIS VELHA: ");
    for (int i = 0; i < pessoas; i++) {
        if (idade[i] == idadeMaior) {
            printf("%s\n", nome[i]);
        }
    }

    return 0;
}

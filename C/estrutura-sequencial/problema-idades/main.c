#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade = 2, total = 0;
    char nome[quantidade][50];
    int idade[quantidade];
    for(int i = 0; i < quantidade; i++){
        printf("Dados da %i pessoa: \n", i+1);
        printf("Nome: ");
        scanf("%s", &nome[i]);
        printf("Idade: ");
        scanf("%i", &idade[i]);
        total += idade[i];
    }
    printf("A media das idades = %.1f", (double) total / quantidade);

    return 0;
}

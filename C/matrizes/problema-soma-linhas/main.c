#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas, colunas;
    printf("Digite o numero de linhas: ");
    scanf("%i", &linhas);
    printf("Digite o numero de colunas: ");
    scanf("%i", &colunas);
    while(linhas > 10 || colunas > 10 || linhas < 0 || colunas < 0){
        printf("Nao e permitido numeros abaixo de 0 e nem acima de 10\nDingite novamente\n");
        printf("Digite o numero de linhas: ");
        scanf("%i", &linhas);
        printf("Digite o numero de colunas: ");
        scanf("%i", &colunas);
    }

    float matriz[linhas][colunas];
    float vetorSomado[linhas];

    for(int i = 0; i < linhas; i++){
        printf("Digite os elementos da %ia linha:\n", i+1);
        for(int j = 0; j< colunas; j++){
            scanf("%f", &matriz[i][j]);
        }
    }
    for(int i = 0; i < linhas; i++){
        vetorSomado[i] = 0;
        for(int j = 0; j< colunas; j++){
            vetorSomado[i] += matriz[i][j];
        }
    }
    printf("VETOR GERADO:\n");
    for(int i = 0; i <linhas; i++){
        printf("%.2f \n", vetorSomado[i]);
    }

    return 0;
}

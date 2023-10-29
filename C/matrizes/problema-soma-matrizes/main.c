#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas, colunas;
    printf("|No maximo 10 e no minimo 0|\n");
    do{
        printf("Quantas linhas vai ter cada matriz? ");
        scanf("%i", &linhas);
        printf("Quantas colunas vai ter cada matriz? ");
        scanf("%i", &colunas);
    }while(linhas > 10 || linhas < 0 || colunas > 10 || colunas < 0);

    int matrizA[linhas][colunas], matrizB[linhas][colunas];
    printf("Digite os valores da matriz A:\n");
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("Elemento [%i,%i]: ", i, j);
            scanf("%i", &matrizA[i][j]);
        }
    }
    printf("Digite os valores da matriz B:\n");
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("Elemento [%i,%i]: ", i, j);
            scanf("%i", &matrizB[i][j]);
        }
    }

    printf("MATRIZ SOMA: \n");
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%i ", matrizA[i][j]+matrizB[i][j]);
        }
        printf("\n");
    }

    return 0;
}

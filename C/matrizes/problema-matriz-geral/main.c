#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ordem;
    printf("No maximo 10 e no minimo 0\n");
    do{
        printf("Qual a ordem da matriz? ");
        scanf("%i", &ordem);
    }while(ordem > 10 || ordem < 0);

    float somaPositivos = 0;

    float matriz[ordem][ordem];
    for(int i = 0; i < ordem; i++){
        for(int j = 0; j < ordem; j++){
            printf("Elemento [%i,%i]: ", i, j);
            scanf("%f", &matriz[i][j]);
            if(matriz[i][j] > 0){
                somaPositivos += matriz[i][j];
            }
        }
    }

    printf("\n\nSoma dos positivos: %1.f", somaPositivos);

    int linha;
    printf("\n\nEscolha uma linha: ");
    scanf("%i", &linha);
    printf("Linha Escolida: ");
    for(int i = 0; i < ordem; i++){
        printf("%.1f ", matriz[linha][i]);
    }

    int coluna;
    printf("\n\nEscolha uma coluna: ");
    scanf("%i", &coluna);
    printf("Coluna Escolida: ");
    for(int i = 0; i < ordem; i++){
        printf("%.1f ", matriz[i][coluna]);
    }

    printf("\n\nColuna principal: ");
    for(int i = 0; i< ordem; i++){
        for (int j = 0; j < ordem; j++){
            if(i == j){
                printf("%.1f ", matriz[i][j]);
            }
        }
    }

    printf("\n\nMatriz alterada:\n");
    for(int i = 0; i< ordem; i++){
        for (int j = 0; j < ordem; j++){
            if(matriz[i][j] < 0){
                matriz[i][j] *= matriz[i][j];
            }
            printf("%.1f ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

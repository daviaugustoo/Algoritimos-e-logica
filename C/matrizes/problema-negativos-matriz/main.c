#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas, colunas;
    printf("Qual a quantidade linhas? ");
    scanf("%i", &linhas);
    printf("Qual a quantidade de colunas? ");
    scanf("%i", &colunas);
    while(linhas > 10 || colunas > 10 || linhas < 0 || colunas < 0){
        printf("No máximo 10 e no minimo 0\n\n DIGITE NOVAMENTE:\n\n");
        printf("Qual a quantidade linhas? \n");
        scanf("%i", &linhas);
        printf("Qual a quantidade de colunas? \n");
        scanf("%i", &colunas);
    }

    int matriz [linhas][colunas];

    for(int i = 0; i< linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("Elemento [%i,%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }
    printf("VALORES NEGATIVOS:\n");
    for(int i = 0; i< linhas; i++){
        for(int j = 0; j < colunas; j++){
            if(matriz[i][j] < 0){
                printf("%i\n", matriz[i][j]);
            }
        }
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("|No maximo 10 e no minimo 0|\n");
    int ordem;
    do{
        printf("Qual ordem da matriz? ");
        scanf("%i", &ordem);
    }while(ordem < 0 || ordem > 10);

    int matriz[ordem][ordem];
    for(int i = 0; i < ordem ; i++){
        for(int j = 0; j < ordem; j++){
            printf("Elemento [%i,%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

    int soma = 0;
    for(int i = 0; i < ordem ; i++){
        for(int j = 0; j < ordem; j++){
            if(i < j){
                soma += matriz[i][j];
            }
        }
    }
    printf("SOMA DOS ELEMEENTOS ACIMA DA DIAGONAL = %i", soma);
    return 0;
}

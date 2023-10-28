#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ordem, negativos = 0;
    printf("Qual a ordem da matriz? ");
    scanf("%i", &ordem);
    int matriz[ordem][ordem];
    for(int i = 0; i < ordem; i++){
        for (int j = 0; j < ordem; j++){
            printf("Elemento[%i,%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }
    printf("DIAGONAL PRINCIPAL:\n");
    for(int i = 0; i < ordem; i++){
        for (int j = 0; j < ordem; j++){
            if(i == j){
                printf("%i ", matriz[i][j]);
            }
            if(matriz[i][j] < 0){
                negativos++;
            }
        }
    }
    printf("\nQUANTIDADE DE NEGATIVOS = %i", negativos);
    return 0;
}

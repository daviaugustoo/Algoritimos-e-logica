#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ordem;
    printf("Qual a ordem da matriz? ");
    scanf("%i", &ordem);
    while(ordem > 10 || ordem < 0){
        printf("valor maximo 10 e minimo 0\nGIGITE NOVAMENTE\n\n");
        printf("Qual a ordem da matriz? ");
        scanf("%i", &ordem);
    }

    int matriz[ordem][ordem];

    for(int i = 0; i < ordem; i++){
        for(int j = 0; j < ordem; j++){
            printf("Elemento [%i,%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

    int vetor[ordem];

    for(int i = 0; i < ordem; i++){
        vetor[i] = 0;
        for(int j = 0; j < ordem; j++){
            if(vetor[i] < matriz[i][j]){
                vetor[i] = matriz[i][j];
            }
        }
    }
    printf("MAIOR ELEMENTO DE CADA LINHA: \n");
    for(int i = 0; i < ordem; i++){
        printf("%i\n", vetor[i]);
    }

    return 0;
}

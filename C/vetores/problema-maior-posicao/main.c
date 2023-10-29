#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("Quantos numeros vai digitar? ");
    scanf("%i", &N);

    float vetor[N];
    for(int i = 0; i < N; i++){
        printf("DIGITE UM NUMERO: ");
        scanf("%f", &vetor[i]);
    }
    float maior;
    int posicao;
    for(int i = 0; i < N; i++){
        if (i == 0){
            maior = vetor[i];
            posicao = i;
        }
        if(vetor[i] > maior){
            maior = vetor[i];
            posicao = i;
        }
    }
    printf("Maior valor = %.1f\n", maior);
    printf("Posicao do maior = %i", posicao);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("Quantos elementos vai ter o vetor? ");
    scanf("%i", &N);

    float vetor[N];
    float media, total = 0;
    for(int i = 0; i < N; i++){
        printf("Digite um numero: ");
        scanf("%f", &vetor[i]);
        total += vetor[i];
    }
    media = total / (float) N;
    printf("Media do vetor = %.3f\n", media);
    printf("ELEMENTOS ABAIXO DA MEDIA:\n");
    for(int i = 0; i < N; i++){
        if(vetor[i] < media){
            printf("%.1f\n", vetor[i]);
        }
    }

    return 0;
}

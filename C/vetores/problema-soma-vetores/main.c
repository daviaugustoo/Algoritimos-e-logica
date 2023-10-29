#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("Quantos valores vai ter cada vetor? ");
    scanf("%i", &N);

    float vetorA[N], vetorB[N];
    printf("DIGITE OS VALORES DO VETOR A: \n");
    for(int i = 0; i < N; i++){
        scanf("%f", &vetorA[i]);
    }
    printf("DIGITE OS VALORES DO VETOR B: \n");
    for(int i = 0; i < N; i++){
        scanf("%f", &vetorB[i]);
    }
    printf("VETOR RESULTANTE: \n");
    for(int i = 0; i < N; i++){
        printf("%.1f\n", vetorA[i] + vetorB[i]);
    }
    return 0;
}

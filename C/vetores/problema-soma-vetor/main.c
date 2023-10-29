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

    float soma = 0;
    printf("Valores = ");
    for(int i = 0; i < N; i++){
        printf("%.2f ", vetor[i]);
        soma+= vetor[i];
    }
    printf("\nSOMA = %.2f\n", soma);
    printf("MEDIA = %.2f\n", soma/(float) N);
    return 0;
}

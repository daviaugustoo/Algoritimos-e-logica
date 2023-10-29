#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("Quantos numeros vai digitar? ");
    scanf("%i", &N);

    int vetor[N];
    for(int i = 0; i < N; i++){
        printf("DIGITE UM NUMERO: ");
        scanf("%i", &vetor[i]);
    }

    int pares = 0;
    printf("Numeros pares = ");
    for(int i = 0; i < N; i++){
        if (vetor[i] % 2 == 0){
            printf("%i ", vetor[i]);
            pares++;
        }
    }
    printf("\nQuantidade de pares = %i\n", pares);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("Quantos elementos vai ter o vetor? ");
    scanf("%i", &N);

    int vetor[N];
    int totalPares = 0, pares = 0;
    for(int i = 0; i < N; i++){
        printf("Digite um numero: ");
        scanf("%i", &vetor[i]);
        if(vetor[i]%2 == 0){
            totalPares+= vetor[i];
            pares++;
        }
    }
    if(pares > 0){
        printf("MEDIA DOS PARES = %i", totalPares/pares);
    }else{
        printf("NENHUM NUMERO PAR");
    }
    return 0;
}

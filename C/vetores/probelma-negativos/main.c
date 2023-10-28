#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N = 1;
    printf("Digite quantos numeros vai digitar: ");
    scanf("%i", &N);
    while (N > 10 || N < 0){
        printf("O numero deve ser positivo e no maximo 10\nDigite novamente: ");
        scanf("%i", &N);
    }
    int vetor[N];
    for (int verificador = 0; verificador < N; verificador++)
    {
        printf("Digite um numero: ");
        scanf("%i", &vetor[verificador]);
    }
    printf("NUMEROS NEGATIVOS:\n");
    for(int verificador = 0; verificador < N; verificador++)
    {
        if(vetor[verificador] < 0){
            printf("%i", vetor[verificador]);
        }
    }
    return 0;
}

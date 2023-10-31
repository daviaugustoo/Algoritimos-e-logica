#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pessoas;
    printf("Quantos pessoas  serao digitados? ");
    scanf("%i", &pessoas);

    float altura[pessoas];
    char genero[pessoas][1];
    float maiorAltura, menorAltura, alturaMulheres = 0;
    int totalMulheres = 0, totalHomens = 0;

    for(int i = 0; i < pessoas; i++){
        printf("Altura da %i pessoa: ", i+1);
        scanf("%f", &altura[i]);
        printf("Genero da %i pessoa: ", i+1);
        scanf(" %c", &genero[i][0]);
        genero[i][1] = '\0';
        if (genero[i][0] == 'F' || genero[i][0] == 'f'){
            totalMulheres++;
            alturaMulheres += altura[i];
        } else {
            totalHomens++;
        }
        if(i == 1){
            maiorAltura = altura[i];
            menorAltura = altura[i];
        }else{
            if(altura[i] > maiorAltura){
                maiorAltura = altura[i];
            }
            if(altura[i] < menorAltura){
                menorAltura = altura[i];
            }
        }
    }
    printf("Menor altura = %.2f\n", menorAltura);
    printf("Maior altura = %.2f\n", maiorAltura);
    printf("Media das alturas das mulheres = %.2f\n", alturaMulheres / (float) totalMulheres);
    printf("Numero de homens = %i", totalHomens);

    return 0;
}

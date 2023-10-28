#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pessoas ;
    printf("Quantas pessoas serao digitadas? ");
    scanf("%i", &pessoas);
    while  (pessoas < 0){
        printf("Digite novamente: ");
        scanf("%i", &pessoas);
    }

    float altura[pessoas], totalAltura = 0, mediaAltura = 0;
    float idade [pessoas], menos16 = 0;
    char nome[pessoas][50];

    for(int verificador = 0; verificador < pessoas; verificador++){
        printf("Dados da %ia pesssoa:\n", verificador+1);
        printf("Nome: ");
        scanf("%s", &nome[verificador]);
        printf("Idade: ");
        scanf("%f", &idade[verificador]);
        printf("Altura: ");
        scanf("%f", &altura[verificador]);
        totalAltura+= altura[verificador];
        if(idade[verificador]< 16){
            menos16++;
        }
    }

    mediaAltura = totalAltura / pessoas;
    printf("Altura media: %.2f\n", mediaAltura);

    printf("Pessoas com menos de 16 anos: %.1f%%\n", menos16/pessoas *100);
    for(int verificador = 0; verificador < pessoas; verificador++){
        if(idade[verificador] < 16){
            printf("%s\n", nome[verificador]);
        }
    }
    return 0;
}

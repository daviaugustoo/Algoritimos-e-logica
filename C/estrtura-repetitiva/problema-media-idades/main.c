#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 0, idadeTotal = 0, totalPessoas = 0;
    printf("Digite as idades:\n");
    do{
        idadeTotal += idade;
        totalPessoas++;
        scanf("%i", &idade);
    }while(idade > 0);
    if(idadeTotal <= 0){
        printf("IMPOSSIVEL CALCULAR");
    }else{
        printf("MEDIA = %.2f", (double)idadeTotal/(totalPessoas - 1));
    }

    return 0;
}

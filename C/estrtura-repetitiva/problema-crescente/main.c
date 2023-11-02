#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1 , numero2;
    do{
        printf("Digite dois numeros:\n");
        scanf("%i", &numero1);
        scanf("%i", &numero2);
        if(numero1 > numero2){
            printf("DECRESCENTE\n");
        }else if(numero2 > numero1){
            printf("CRESCENTE\n");
        }
    }while(numero1 != numero2);

    return 0;
}

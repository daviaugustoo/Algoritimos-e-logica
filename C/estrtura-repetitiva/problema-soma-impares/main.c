#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2, soma = 0;
    printf("Digite dois numeros: \n");
    scanf("%i", &numero1);
    scanf("%i", &numero2);
    if(numero1 > numero2){
        for(int i = numero2+1; i < numero1; i++){
            if(i%2 != 0){
                soma+= i;
            }
        }
    }else{
        for(int i = numero1+1; i < numero2; i++){
            if(i%2 != 0){
                soma+= i;
            }
        }
    }
    printf("SOMA DOS IMPARES = %i", soma);
    return 0;
}

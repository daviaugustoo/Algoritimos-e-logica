#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("Deseja tabuada para qual valor? ");
    scanf("%i", &numero);
    for(int i = 1; i <= 10; i++){
        printf("%i x %i = %i\n", numero, i, numero*i);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("NOTA FINAL = %.1f\n", nota1+nota2);
    if (nota1 + nota2 < 60){
        printf("REPROVADO");
    }
    return 0;
}

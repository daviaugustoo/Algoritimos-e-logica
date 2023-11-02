#include <stdio.h>
#include <stdlib.h>
#include <math.h> //Na biblioteca <math.h> estão contidas diversas funções matemáticas básicas

int main()
{
    float base, altura;
    printf("Bates do retangulo: ");
    scanf("%f", &base);
    printf("Altura do retangulo: ");
    scanf("%f", &altura);
    printf("AREA = %.4f \n", base * altura);
    printf("PERIMETRO = %.4f \n", 2 * base + 2 * altura);
    printf("DIAGONAL = %.4f \n", sqrt(pow(base, 2)+ pow(altura, 2)));

    return 0;
}

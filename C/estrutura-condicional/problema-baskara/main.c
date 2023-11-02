#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c;
    printf("Coeficiente a: ");
    scanf("%f", &a);
    printf("Coeficiente b: ");
    scanf("%f", &b);
    printf("Coeficiente c: ");
    scanf("%f", &c);

    float delta = pow(b, 2) - 4 * a * c;

    float x1 = (- b + sqrt(delta)) / (2*a);
    float x2 = (- b - sqrt(delta)) / (2*a);

    if(delta < 0){
        printf("Esta equacao nao possui raizes reais");
    }else{
        printf("X1 = %.4f\n",x1);
        printf("X2 = %.4f\n",x2);
    }

    return 0;
}

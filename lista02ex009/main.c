#include <stdio.h>
#include <stdlib.h>
#include <math.h>



float calculahipotenusa(float c1, float c2 )
{
    return(sqrt(c1*c1+c2*c2));
}
int main()
{
    float cateto1, cateto2;

    printf("Escreva o tamanho do cateto 1: ");
    scanf("%f",&cateto1);
    printf("Escreva o tamanho do cateto 2: ");
    scanf("%f",&cateto2);

    printf("A hipotenusa e igual a : %f",calculahipotenusa(cateto1,cateto2));

    return 0;
}

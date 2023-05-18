#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f;
    float x,y;

    printf("Escreva o coeficientes de a ate f e aperte ENTER ate completar todos os 6: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    scanf("%d",&f);

    x = (c*e - b*f)/(a*e - b*d);
    y = (a*f - c*d)/(a*e - b*d);

    printf("\nX = %f\nY = %f",x,y);

    return 0;
}

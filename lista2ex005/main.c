#include <stdio.h>
#include <stdlib.h>

int calculavendas(int p, int m, int g)
{
    return(p*10+m*12+g*15);
}


int main()
{
    int p,m,g,v;

    printf("Escreva a quantidade de camisetas P: ");
    scanf("%d",&p);

    printf("Escreva a quantidade de camisetas M: ");
    scanf("%d",&m);

    printf("Escreva a quantidade de camisetas G: ");
    scanf("%d",&g);


    printf("O valor arrecadado foi de: %d",calculavendas(p,m,g));

    return 0;
}

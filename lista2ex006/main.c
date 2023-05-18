#include <stdio.h>
#include <stdlib.h>


int main()
{
    int  dias, meses, anos;

    printf("Escreva o tempo em dias: ");
    scanf("%d",&dias);

    anos = dias/365;
    meses = (dias%365)/30;
    dias = (dias%365)%30;

    printf("%danos %dmeses %ddias",anos,meses,dias);
    return 0;
}

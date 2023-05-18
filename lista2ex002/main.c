#include <stdio.h>
#include <stdlib.h>

int main()
{
    int centena, dezena, unidade, numero;

    printf("escreva um numero de 3 digitos: ");
    scanf("%d",&numero);

    centena = numero/100;
    dezena = (numero%100)/10;
    unidade = (numero%100)%10;
    printf("CENTENA = %d\nDEZENA = %d\nUNIDADE = %d",centena,dezena,unidade);

    return 0;
}

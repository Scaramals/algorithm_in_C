#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sanduiche, queijo, presunto, hamburguer;

    printf("Escreva a quantidade de sanduiches que voce quer fazer: \n");
    scanf("%f",&sanduiche);

    queijo = (100*sanduiche)/1000;
    presunto = (50*sanduiche)/1000;
    hamburguer = (100*sanduiche)/1000;

    printf("Voce precisa de %fKg de queijo, %fKg de presunto, %fKg de carne para fazer o sanduiche",queijo,presunto,hamburguer);

    return 0;
}

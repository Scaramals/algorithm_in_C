#include <stdio.h>
#include <stdlib.h>

float calculasalario(float salario, float vendas)
{
    salario = salario + vendas*0.15;
    return(salario);
}


int main()
{
    float salariofix, valortotalv1, valortotalv2, salariov1, salariov2;
    char vendedor1[100];
    char vendedor2[100];

    printf("Escreva o nome do primeiro trabalhador: ");
    gets(vendedor1);
    printf("Escreva o salario fixo: ");
    scanf("%f",&salariofix);
    printf("Escreva quando ele vendeu em reais: ");
    scanf("%f",&valortotalv1);

    printf("\nEscreva o nome do segundo trabalhador: ");
    gets(vendedor2);
    printf("\nEscreva o salário fixo: ");
    scanf("%f",&salariofix);
    printf("Escreva quando ele vendeu em reais: ");
    scanf("%f",&valortotalv2);

    printf("%s\n%f\n",vendedor1,calculasalario(salariofix,valortotalv1));
    printf("%s\n%f\n",vendedor2,calculasalario(salariofix,valortotalv2));


    return 0;
}

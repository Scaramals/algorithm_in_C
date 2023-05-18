#include <stdio.h>
#include <stdlib.h>


int main()
{
    float conta,felipe;
    int carlos,andre;

    printf("Escreva o valor da conta: ");
    scanf("%f",&conta);

    carlos = conta/3 ;
    andre = conta/3 ;
    felipe = carlos + 3*(conta/3 - carlos) ;

    printf("A conta deu R$%d para Carlos, R$%d para André e R$%f para Felipe.",carlos,andre,felipe);


    return 0;
}

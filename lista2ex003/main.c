#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  segundos, horas, minutos;

    printf("Escreva o tempo em segundos: ");
    scanf("%d",&segundos);

    horas = segundos/360;
    minutos = (segundos%360)/60;
    segundos = (segundos%360)%60;

    printf("%dhrs %dmin %dseg",horas,minutos,segundos);

    return 0;
}

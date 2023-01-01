#include <stdio.h>
#include <stdlib.h>

int main(){

    double massa;
    int aux = 0;

    printf("Digite a massa do material radioativo (em gramas)\n\n");
    scanf("%lf", &massa);

    printf("Massa inicial: %lf\n", massa);

    while (massa > 0.5){

        massa = massa/2;
        aux++;

    }

    printf("Massa final: %lf\n", massa);

    aux = aux*50;

    int horas, minutos, segundos;

    segundos = aux%60;

    aux = aux - segundos;

    minutos = (aux%3600)/60;
    aux = aux - (60*minutos);

    horas = aux/3600;

    printf("Tempo decorrido: ");

    if (horas<=9){

        printf("0%d:", horas);

    }

    else{

        printf("%d:", horas);

    }

    if (minutos<=9){

        printf("0%d:", minutos);

    }

    else{

        printf("%d:", minutos);

    }

    if (segundos<=9){

        printf("0%d", segundos);

    }

    else{

        printf("%d", segundos);

    }

    printf(" (formato: hh:mm:ss)\n");

}

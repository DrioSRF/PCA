#include <stdio.h>
#include <stdlib.h>

int main(){

    float soma = 0;
    int numerador = 1;

    for (int i=1; i<=50; i++){

        soma = (soma + (numerador/i));
        numerador = numerador+2;

    }

    printf("%f", soma);

}

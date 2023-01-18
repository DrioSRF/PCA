#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float read_real(){

    float num;

    printf("Digite um número real entre 0 e 1\n");
    scanf("%f", &num);

    while((num > 1) || (num < 0)){

        printf("Número fora do escopo. Digite novamente:\n");
        scanf("%f", &num);

    }

    return num;

}

float arctan(float num){

    float parada = num;
    float ARCTAN = num;
    int k = 3;
    int operacao = 0;
    float pot;

    while (parada > 0.0001){

        pot = pow(num, k);
        parada = pot/k;

        if (operacao == 0){

            ARCTAN = ARCTAN - parada;
            operacao = 1;

        }

        else{

            ARCTAN = ARCTAN + parada;
            operacao = 0;

        }

        k = k+2;

    }

    return ARCTAN;

}

void show(float num, float ARCTAN){

    printf("The arctan of the angle %f is: %f\n", num, ARCTAN);

}

int main(){

    float num = read_real();

    float ARCTAN = arctan(num);

    show(num, ARCTAN);

}

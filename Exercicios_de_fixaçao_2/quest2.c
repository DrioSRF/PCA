
#include <stdio.h>
#include <stdlib.h>

int main(){

	printf("Digite 15 números reais\n");

    float maior, menor, prox;

    scanf("%f", &maior);
    scanf("%f", &menor);

    if(maior < menor){

        prox = maior;
        maior = menor;
        menor = prox;
    }

    for (int i=0; i<13; i++){

        scanf("%f", &prox);

        if (prox > maior){

            maior = prox;
        }

        else{
            if (prox < menor){
                menor = prox;
            }
        }
    }

    printf("O maior é: %f\nO menor é: %f\n", maior, menor);

}

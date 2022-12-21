#include <stdio.h>
#include <stdlib.h>

int main(){
	
	printf("Digite 20 números inteiros\n");

    int maior, menor, prox;

    scanf("%d", &maior);
    scanf("%d", &menor);

    if(maior < menor){

        prox = maior;
        maior = menor;
        menor = prox;
    }

    for (int i=0; i<18; i++){

        scanf("%d", &prox);

        if (prox > maior){

            maior = prox;
        }

        else{
            if (prox < menor){
                menor = prox;
            }
        }
    }

    printf("O maior é: %d\nO menor é: %d", maior, menor);

}

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	printf("Digite 20 números inteiros\n");
    printf("Note que apenas números positivos serão considerados\n");

    int maior, menor, prox;

    scanf("%d", &menor);
    scanf("%d", &maior);
		
	if(maior<menor){
		
		prox = maior;
		maior = menor;
		menor = prox;
	}

    for (int i=0; i<18; i++){

		if(maior<0){

			scanf("%d", &maior);
		}

		else{

			if(menor<0){

				scanf("%d", &menor);
			}

			else{

				scanf("%d", &prox);
			}
		}
		
		if(prox>=0){

			if (prox > maior){

				maior = prox;
			}

			else{

				if (prox < menor){

					menor = prox;
				}
			}
		}
	}
	
	if (maior>=0 && menor>=0){
		
		printf("O maior é: %d\nO menor é: %d", maior, menor);
	}
	else{
		printf("Não há valores positivos o suficiente para fazer ");
		printf("comparações e dizer qual é o maior e o menor");
	}

}

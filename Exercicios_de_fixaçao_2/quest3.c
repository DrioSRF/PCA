#include <stdio.h>
#include <stdlib.h>

int main(){

	printf("Digite v�rios n�meros inteiros\n");
	printf("Quando estiver satisfeito digite um n�mero maior que 1000\n");
    printf("Mostrarei a soma dos n�meros pares e");
    printf("a soma dos n�meros �mpares\n\n");

    int pares = 0;
    int impares = 0;
    int proximo;
    scanf("%d", &proximo);

    while (proximo<1000){

        if(proximo%2 != 0){

            pares = pares + proximo;
        }

        else{

            impares = impares + proximo;

        }

        scanf("%d", &proximo);

    }

    printf("A soma dos n�meros �mpares inseridos �: %d\n", impares);
    printf("A soma dos n�meros pares inseridos �: %d", pares);

}

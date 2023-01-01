#include <stdio.h>
#include <stdlib.h>

int main(){

	printf("Digite vários números inteiros\n");
	printf("Quando estiver satisfeito digite um número maior que 1000\n");
    printf("Mostrarei a soma dos números pares e");
    printf("a soma dos números ímpares\n\n");

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

    printf("A soma dos números ímpares inseridos é: %d\n", impares);
    printf("A soma dos números pares inseridos é: %d", pares);

}

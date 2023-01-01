#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;
    int aux = 0;

    printf("Digite um numero inteiro positivo\n");
    printf("Direi se ele é perfeito\n");
    scanf("%d", &num);

    for (int i=1; i<num; i++){

        if (num%i == 0){

            aux = aux + i;

        }

    }

    if (aux == num){

        printf("%d eh um numero perfeito\n", num);

    }

    else{

        printf("%d nao eh um numero perfeito\n", num);

    }

}

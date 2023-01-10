#include <stdio.h>
#include <stdlib.h>

int fib(int n){

    int anterior = 1;
    int atual = 1;
    int aux = 0;

    if (n == 1){return 1;}

    else{

        if (n == 2){return 1;}

        else{

            while (n>2){

                aux = atual;
                atual = atual + anterior;
                anterior = aux;
                n--;

            }

            return atual;

        }
        
    }

}

int main(){

    int n;

    printf("Type the position for the number on the Fibonnacci: \n");
    scanf("%d", &n);

    printf("%d", fib(n));

    return 0;

}

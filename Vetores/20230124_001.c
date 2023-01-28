#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;

    printf("Digite o tamanho da sequencia (o numero precisa ser menor que 100)\n");
    scanf("%d", &n);

    while ((n>100)||(n<0)){

        printf("O numero digitado n�o e valido, digite novamente:\n");
        scanf("%d", &n);

    }

    int sequence[n];

    printf("digite a sequencia de numeros:\n");

    for (int i = 0; i < n; i++){

        scanf("%d", &sequence[i]);

    }

    for (int i = n-1; i >= 0; i--){

        if (i == 0){
            printf("%d\n", sequence[i]);
        }
        else{
            printf("%d ", sequence[i]);
        }

    }

    return 0;
}

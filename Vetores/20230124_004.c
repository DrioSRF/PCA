#include <stdio.h>
#include <stdlib.h>

void even_only(int sequence[], int n, int even[]){

    int m = 0;

    for (int i=0; i<n; i++){
        if(sequence[i]%2 == 0){
            even[m] = sequence[i];
            m++;
        }
    }
}

int number_of_even(int sequence[], int n){

    int m = 0;

    for (int i=0; i<n; i++){

        if(sequence[i]%2 == 0){
            m++;
        }
    }
    return m;
}

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

    for (int i = 0; i < n; i++){scanf("%d", &sequence[i]);}

    int m = number_of_even(sequence, n);

    int even[m];

    even_only(sequence, n, even);

    for (int i=0; i<m; i++){printf("%d ", even[i]);}
}

#include <stdio.h>
#include <stdlib.h>

void array_factorial(int sequence[], int n){

    int aux = 1;

    for (int i=0; i<n; i++){
        for(int j=1; j<=sequence[i]; j++){
            aux = aux*j;
        }
        sequence[i] = aux;
        aux = 1;
    }
}

int main(){

    int n;

    printf("Digite o tamanho da sequencia (o numero precisa ser menor que 100)\n");
    scanf("%d", &n);

    while ((n>100)||(n<0)){
        printf("O numero digitado nao e valido, digite novamente:\n");
        scanf("%d", &n);
    }

    int sequence[n];

    printf("digite a sequencia de numeros:\n");

    for (int i = 0; i < n; i++){scanf("%d", &sequence[i]);}

    array_factorial(sequence, n);

    
    if(n == 1){printf("{%d}\n", sequence[0]);}
    else{
        printf("{%d, ", sequence[0]);
        for (int i=1; i<n; i++){
            if (i == n-1){printf("%d}\n", sequence[i]);}
            else{printf("%d, ", sequence[i]);}
        }
    }
    return 0;
}

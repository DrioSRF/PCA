#include <stdio.h>
#include <stdlib.h>

void crescent(int sequence[], int n){

    int smallest, index, aux;

    for (int i=0; i<n; i++){
        smallest = sequence[i];
        index = i;
        for (int j=i+1; j<n; j++){
            if (sequence[j] < smallest){
                smallest = sequence[j];
                index = j;
            }
        }
        if (index != i){
            aux = sequence[i];
            sequence[i] = sequence[index];
            sequence[index] = aux;
        }
    }

}

int main(){
    int n, occurrence[6];

    printf("Digite o tamanho da sequencia:\n");
    scanf("%d", &n);

    int sequence[n];

    printf("digite a sequencia de numeros:\n");

    for (int i=0; i<n; i++){scanf("%d", &sequence[i]);}

    crescent(sequence, n);

    for (int i=0; i<n; i++){printf("%d ", sequence[i]);}

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int occurrence_in_array(int sequence[], int n, int num){

    int count = 0;

    for (int i=0; i<n; i++){
        if (sequence[i] == num){
            count++;
        }
    }
    return count;
}

int main(){

    int n, occurrence[6];

    printf("Digite o tamanho da sequencia:\n");
    scanf("%d", &n);

    int sequence[n];

    printf("digite a sequencia de numeros:\n");

    for (int i=0; i<n; i++){scanf("%d", &sequence[i]);}

    /*Verifica a ocorrência dos números de 1 a 6 em um vetor*/
    for(int i=1; i<=6; i++){
        occurrence[i-1] = occurrence_in_array(sequence, n, i);
    }

    
    for (int i=1; i<=6; i++){
        printf("Face %d ocorreu %d vezes\n", i, occurrence[i-1]);
    }

    return 0;
}

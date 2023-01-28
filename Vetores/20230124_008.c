#include <stdio.h>
#include <stdlib.h>

void dot_product(int n, int sequence1[], int sequence2[], int dot[]){
    for(int i=0; i<n; i++){dot[i] = sequence1[i]*sequence2[i];}
}

int main(){

    int n, occurrence[6];

    printf("Você está prestes a fazer um produto escalar de 2 sequencias de numeros\n");
    printf("Tenha em mente que, para tanto, as 2 sequencias precisam ter o mesmo tamanho.\n");
    printf("Digite o tamanho das sequencias:\n");
    scanf("%d", &n);

    int sequence1[n], sequence2[n], dot[n];

    printf("Digite a primeira sequencia de numeros:\n");
    for (int i=0; i<n; i++){scanf("%d", &sequence1[i]);}

    printf("Digite a segunda sequencia de numeros:\n");
    for (int i = 0; i<n; i++){scanf("%d", &sequence2[i]);}

    dot_product(n, sequence1, sequence2, dot);

    for(int i=0; i<n; i++){printf("%dx%d = %d\n",sequence1[i], sequence2[i], dot[i]);}

    return 0;
}
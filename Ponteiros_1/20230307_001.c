#include <stdio.h>
#include <stdlib.h>

void imprime_float(float *start, float *end){

    for (float *pvet = start; pvet <= end; pvet++){
        printf("%f ", *pvet);
    }

}

int main(){
    float vet1[5] = {1.3, 2, 3.7, 4.8, 5};
    float vet2[7] = {12.2, 14.453, 11.1, 16.98, 2.23, 6, 4};
    float vet3[3] = {9.1, 22.40, 15.5};

    printf("Vetor1 de 1 a 3\n");
    imprime_float(&vet1[0], &vet1[2]);
    printf("\nVetor1 de 3 a 5\n");
    imprime_float(&vet1[2], &vet1[4]);

    printf("\nVetor2 de 1 a 4\n");
    imprime_float(&vet2[0], &vet2[3]);
    printf("\nVetor2 de 3 a 7\n");
    imprime_float(&vet2[2], &vet2[6]);

    printf("\nVetor3 de 1 a 2\n");
    imprime_float(&vet2[0], &vet2[1]);
    printf("\nVetor3 de 2 a 3\n");
    imprime_float(&vet2[1], &vet2[2]);
    return 0;

}
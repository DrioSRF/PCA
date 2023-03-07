#include <stdio.h>
#include <stdlib.h>

int* primeiro_encontro(int *start, int *end, int valor){

    for (int *pvet = start; pvet <= end; pvet++){

        if(*pvet == valor){
            return pvet;
        }
    }

    return NULL;

}

int main(){

    int vet[10] = {1, 2, 3, 4, 2, 6, 7, 8, 2, 10};

    int *pvet = &vet[0];
    int *achei = primeiro_encontro(pvet, &vet[9], 2);

    while (achei != NULL){
        printf("endereco: %d\n", achei);
        pvet = achei + 1;
        achei = primeiro_encontro(pvet, &vet[9], 2);
    }

    return 0;
}
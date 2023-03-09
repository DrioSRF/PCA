#include <stdio.h>
#include <stdlib.h>

int main(){

    int vet[8];

    int *pvet = &vet[0];

    printf("Digite 8 números inteiros:\n");
    for (; pvet <= &vet[7]; pvet++){
        scanf("%d", pvet);
    }

    printf("O dobro de cada elemento:\n");
    for (pvet = &vet[0]; pvet <= &vet[7]; pvet++){
        if(pvet == &vet[7]){printf("%d\n", *pvet * 2);}
        else{printf("%d, ", *pvet * 2);}
    }

    printf("O endereço dos pares:\n");
    for (pvet = &vet[0]; pvet <= &vet[7]; pvet++){
        if(pvet == &vet[7]){
            if(*pvet%2 == 0){
                printf("%d\n", pvet);
            }
        }
        else{
            if(*pvet%2 == 0){
                printf("%d, ", pvet);
            }
        }
    }

    return 0;
}
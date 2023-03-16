#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* alocaNInteiros(int n){

    int *vet = (int *) malloc(n * sizeof(int));

    for(int i = 0; i < n; i++){
        scanf("%d", vet+i);
    }

    if (vet == NULL){
        printf("Erro: não foi possível alocar memória");
        return -1;
    }

    else{
        return vet;
    }
}

void maiorMenor(int *vet, int n, int *maior, int *menor){

    *maior = vet[0];
    *menor = vet[0];

    for(int *pvet = vet; pvet <= vet+n-1; pvet++){
        if (*pvet > *maior){*maior = *pvet;}
        else{if (*pvet < *menor){*menor = *pvet;}}
    }
}

int main(){
    int n;
    printf("Digite a quantidade de inteiros:\n");
    scanf("%d", &n);

    int *vet = alocaNInteiros(n);

    if(vet == -1){
        return -1;
    }

    int maior, menor;

    maiorMenor(vet, n, &maior, &menor);

    free(vet);

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    return 0;


}

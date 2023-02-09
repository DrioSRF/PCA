#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("Vamos encontrar um número X em uma matriz 3x3, direi sua localização\n");
    printf("mostrando a linha e a coluna onde ele aparece. Caso não esteja na matriz\n");
    printf("direi 'não encontrado', caso apareça mais de uma vez, direi todas as\n");
    printf("posições em que ele aparece.\n\n");

    int matriz[3][3];
    printf("Digite os valores da matriz 3x3:\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    int X;
    int achou = 0;
    printf("Digite o número X:\n");
    scanf("%d", &X);

    for (int i=0;i<3;i++){
        for (int j=0;j<3; j++){
            if(matriz[i][j] == X){
                printf("linha: %d coluna: %d\n", i+1, j+1);
                achou = 1;
            }
        }
    }

    if (achou == 0){
        printf("não encontrado\n");
    }

    return 0;
}

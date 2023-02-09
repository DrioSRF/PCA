#include <stdio.h>
#include <stdlib.h>

void multixescalar(int matriz[3][3], int k, int multi[3][3]){
    for (int i=0;i<3;i++){
        for (int j=0;j<3; j++){
            multi[i][j]= matriz[i][j]*k;
        }
    }
}

int main(){

    printf("Vamos multiplicar uma matriz 3x3 por um escalar.\n");

    int matriz[3][3];
    printf("Digite os valores da matriz 3x3:\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    int k;
    printf("Digite o escalar que irá multiplicar os elementos da matriz:\n");
    scanf("%d", &k);

    int multi[3][3];

    multixescalar(matriz, k, multi);

    for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<3;j++){
            printf("%d ", multi[i][j]);
        }
    }

    return 0;

}

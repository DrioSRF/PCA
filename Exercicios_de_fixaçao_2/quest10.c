#include <stdio.h>
#include <stdlib.h>

int main(void){

    printf("Digite o numero p\n");
    int p;

    scanf("%d", &p);
    printf("\n");

    int proceed = 1;
    int impar = 1;
    int sum = 0;

    while (proceed<=p){

        printf("Atual: %d^3 -> ", proceed);

        for (int i=1; i<=proceed; i++){
            
            printf("%d ", impar);
            sum = sum+impar;
            impar = impar+2;


        }

        printf("== %d", sum);

        sum = 0;

        printf("\n");

        proceed++;

    }

}

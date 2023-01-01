#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int num;
    int primo = 1;

    printf("Digite um numero, direi se ele eh primo\n");
    scanf("%d", &num);

    for (int i = num-1; i>1; i--){

        if (num%i == 0){

            primo = 0;
            break;

        }

    }

    if (primo){

        printf("%d eh primo", num);
    }

    else{

        printf("%d nao eh primo", num);

    }

}

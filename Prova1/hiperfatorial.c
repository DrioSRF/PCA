#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int read_pos_int(){

    int num;

    printf("Digite um número inteiro positivo:\n");
    scanf("%d", &num);

    while(num < 0){

        printf("Número fora do escopo. Digite novamente:\n");
        scanf("%d", &num);

    }

    return num;

}

int hiperfatorial(int num){

    int hyper = 0;

    for (int i = 0; i <= num; i++){hyper = hyper + pow(i,i);}

    return hyper;

}

void show_hiperfatorial(int num, int hyper){printf("O hiperfatorial de %d é: %d\n", num, hyper);}

int main(){

    int num = read_pos_int();

    int hyper = hiperfatorial(num);

    show_hiperfatorial(num, hyper);

    return 0;

}

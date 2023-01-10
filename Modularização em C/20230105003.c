#include <stdio.h>
#include <stdlib.h>

int read_even_int(){

    int num;

    printf("Type an even number:\n");
    scanf("%d", &num);

    while (num%2 != 0){

        printf("The number isn't even, please type again:\n");
        scanf("%d", &num);

    }

    return num;

}

void is_perfect(int num){

    int perfeito = 0;

    for (int i=1; i<num; i++){

        if (num%i == 0){

            perfeito = perfeito + i;

        }

    }

    if (perfeito == num){printf("%d is a perfect number\n", num);}

    else{printf("%d isn't a perfct number\n", num);}

}

int main(){

    int num = read_even_int();
    is_perfect(num);

    return 0;
}

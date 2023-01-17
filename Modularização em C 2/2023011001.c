#include <stdio.h>
#include <stdlib.h>

void frequency(){

    int n, d;
    int count = 0;

    printf("Type an integer number: \n");
    scanf("%d", &n);

    int naux = n;

    printf("Type an integer number between 0 and 9: \n");
    scanf("%d", &d);

    while((d<0)||(d>9)){

        printf("The number is not valid, please type again: \n");
        scanf("%d", &d);

    }

    while(n>0){

        if (n%10 == d){count++;}

        n = n/10;

    }

    printf("The frequency of %d in %d is: %d\n", d, naux, count);

}

int main(){

    frequency();

    return 0;

}
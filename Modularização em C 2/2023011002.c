#include <stdio.h>
#include <stdlib.h>

int frequency(int n, int d){
    
    int count = 0;

    while(n>0){

        if (n%10 == d){count++;}

        n = n/10;

    }

    return count;

}

int permutation(int a, int b){

    int aux, d, permut = 0;

    if (a > b){aux = a;}

    else{aux = b;}

    d = aux%10;

    while (aux > 0){

        if (frequency(a, d) != frequency(b, d)){

            permut++;
            break;
        
        }

        aux = aux/10;
        d = aux%10;

    }

    return !permut;

}

int main(){

    int a, b, permut;

    printf("Type an integer number: \n");
    scanf("%d", &a);

    printf("Type an integer number: \n");
    scanf("%d", &b);

    permut = permutation(a, b);

    if (permut){printf("The number %d is a permutation of %d\n", a, b);}

    else{printf("The number %d isn't a permutation of %d\n", a, b);}

}
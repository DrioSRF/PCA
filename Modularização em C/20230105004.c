#include <stdio.h>
#include <stdlib.h>

int fat(int n){

    int fatorial = 1;

    for (int i=1; i<n; i++){

        fatorial = fatorial +(fatorial*i);

    }

    return fatorial;
}

int main(){

    int n;

    printf("Type an integer number: \n");
    scanf("%d", &n);

    printf("%d! = %d\n", n, fat(n));

}

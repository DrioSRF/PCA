#include <stdio.h>
#include <stdlib.h>

int main(){
	
	printf("Digite 5 números inteiros (1 de cada vez)\n");

    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    a = a + b;

    for (int i=0; i<3; i++){

        scanf("%d", &b);

        a = a + b;
    }

    printf("A soma desses 5 números é: %d", a);

}

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	printf("Digite 50 números inteiros (1 de cada vez)\n");
    printf("Observe que apenas os números ímpares entre 100 e 200 serão somados");

    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    if(b%2 != 0){

        if (a>=100 && a<=200 && b>=100 && b<=200){

            a = a + b;
        }
    }

    for (int i=0; i<48; i++){

        scanf("%d", &b);

        if(b%2 != 0){

            if (b>=100 && b<=200){

                a = a + b;
            }
        }
    }

    printf("A soma dos números ímpares inseridos é: %d", a);

}

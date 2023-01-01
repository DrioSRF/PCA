#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("Dada a expressão xy - x^2 + y, direi quais numeros\n");
    printf("darão valor máximo a partir de dois numeros naturais\n");
    printf("n e m, onde x<=m e y<=n\n\n");

    int m, n, x, y;

    printf("Digite o valor de m: ");
    scanf("%d", &m);
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int maior = 0;
    int aux = 0;

    for (int i=0; i<=m; i++){

        for (int j=0; j<=n; j++){

            aux = (i*j)-(i*i)+j;

            if (aux>maior){

                x = i;
                y = j;
                maior = aux;

            }

        }

    }

    printf("O valor máximo encontrado foi: %d\n", maior);
    printf("O valor de x foi: %d\n", x);
    printf("O valor de y foi: %d\n", y);

}

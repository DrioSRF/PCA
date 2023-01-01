#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

    float num, root1, root2;

    printf("Digite um n�mero para encontrar a raiz quadrada\n");
    scanf("%f", &num);

    root1 = num/2;

    float proceed = 1.0;

    while(proceed > 0.1){

        root2 = root1 - ((root1*root1-num)/(2*root1));
        proceed = fabs(root2-root1);
        root1 = root2;

    }

    root2 = sqrtf(num);

    printf("A raiz obtida com o m�todo de aproxima��o �: %.2f\n", root1);
    printf("A raiz obtida com a fun��o sqrt �: %.2f", root2);

}

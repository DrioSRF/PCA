#include <stdio.h>
#include <stdlib.h>

void troca(float *a, float *b){
    float aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
    float a = 12.5;
    float b = 2.4;
    
    printf("Antes da troca:\n");
    printf("a: %.2f\nb: %.2f\n\n", a, b);
    
    troca(&a, &b);

    printf("Após a troca:\n");
    printf("a: %.2f\nb: %.2f\n\n", a, b);

}
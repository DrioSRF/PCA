#include <stdio.h>
#include <stdlib.h>

int tri_order(int *x, int *y, int *z){
    if((*x == *y) && (*x == *z)){return 1;}
    
    else{
        int aux;
        if((*x < *y) && (*x < *z)){
            if(*y < *z){return 0;}
            else{
                aux = *y;
                *y = *z;
                *z = aux;
                return 0;
            }
        }
        else{
            if(*y < *z){
                aux = *x;
                *x = *y;
                *y = aux;
                if(*y < *z){return 0;}
                else{
                    aux = *z;
                    *z = *y;
                    *y = aux;
                    return 0;
                }
            }
            else{
                aux = *z;
                *z = *x;
                *x = aux;
                if(*y < *z){return 0;}
                else{
                    aux = *z;
                    *z = *y;
                    *y = aux;
                    return 0;
                }
            }
        }
    }
}

int main(){

    int x = 5, y = 1, z = 2;

    printf("Antes da troca:\n");
    printf("x: %d\ny: %d\nz: %d\n", x, y, z);

    int tri = tri_order(&x, &y, &z);
    printf("O resultado da função: %d\n", tri);
    printf("Depois da troca:\n");
    printf("x: %d\ny: %d\nz: %d\n", x, y, z);

    return 0;
}
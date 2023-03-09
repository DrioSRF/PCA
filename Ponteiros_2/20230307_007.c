#include <stdio.h>
#include <stdlib.h>

void min_max(int array[], int *min, int *max, int tam){
    tam = tam/sizeof(int);
    *min = array[0];
    *max = array[0];
    for(int *parray = array; parray <= &array[tam - 1]; parray++){
        if(*parray < *min){
            *min = *parray;
        }

        else{
            if(*parray > *max){
                *max = *parray;
            }
        }
    }
}

int main(){

    int array[] = {12, 15, -8, 9, -3, 1, 22};
    int min, max;
    
    min_max(array, &min, &max, sizeof(array));

    printf("Max: %d\nMin: %d\n", max, min);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

void letter_freq(char string[], char letter, int pos[], int *tam){
    int i = 0;
    *tam = 0;
    while(string[i] != '\0'){
        if(string[i] == letter){
            pos[*tam] = i;
            *tam += 1;
        }
        i++;
    }
}

int main(){

    char string[] = "passaro";
    char letter = 'a';

    int pos[sizeof(string)];
    int tam;

    letter_freq(string, letter, pos, &tam);

    printf("tam: %d\n", tam);
    for(int i = 0; i<tam; i++){printf("pos: %d\n", pos[i]);}

    return 0;
}
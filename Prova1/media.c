#include <stdio.h>
#include <stdlib.h>

int main(){

    float nota, maior, menor;

    printf("Digite a primeira nota:\n");
    scanf("%f", &nota);

    float media = 0;

    maior = nota;
    menor = nota;
    int num = 0;

    while (nota > 0){

        media = media + nota;

        if (nota > maior){maior = nota;}
        
        if (nota < menor){menor = nota;}

        printf("Digite a próxima nota:\n");
        scanf("%f", &nota);

        num++;

    }

    if (num == 0){

        printf("Nenhuma nota foi inserida.\n");

    }
    
    else{

        media = media/num;
        printf("A maior nota da turma foi: %.2f\n", maior);
        printf("A menor nota da turma foi: %.2f\n", menor);
        printf("A média da turma foi: %.2f\n", media);

    }

    return 0;

}

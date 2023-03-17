#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void imprime(float *init, float *end){

    for (float *pvet = init; pvet <= end; pvet++){
        printf("%f\n", *pvet);
    }

}

void mediaDesvio(float *vetor, int tam, float *media, float *desvio){

    float soma = 0.0;
    float soma_desvio = 0;

    for (float *pvet = vetor; pvet <= vetor+(tam-1); pvet++){soma += *pvet;}
    *media = soma/tam;

    for (float *pvet = vetor; pvet <= vetor+(tam-1); pvet++){

        soma_desvio += pow((*pvet - *media), 2);

    }

    *desvio = sqrt(soma_desvio/tam);

}

int main(){

    int tam;
    printf("Digite a quantidade de alunos na turma\n");
    scanf("%d", &tam);

    if(tam <= 0){
        do{
            printf("Quantidade inválida, digide novamente:\n");
            scanf("%d", &tam);
        }while(tam <= 0);
    }

    float *notas;
    notas = (float *) malloc (tam * sizeof(float));
    if (notas == NULL){
        printf("Erro: não foi possível alocar memória");
        return -1;
    }
    else{
        printf("Agora digite as notas dos alunos:\n");

        for (int i = 0; i<tam; i++){
            scanf("%f", notas+i);
        }

        float media, desvio;
        mediaDesvio(notas, tam, &media, &desvio);
        printf("Media da turma: %.2f\n", media);
        printf("Desvio padrão: %f\n", desvio);
        free(notas);
        
        return 0;
    }
}

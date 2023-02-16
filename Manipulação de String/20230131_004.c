#include <stdio.h>
#include <string.h>
#include <string.h>

int main(){

    char s1[20], c;
    int lido = 0;
    int repeat = 1;

    while (repeat){
        printf("Digite apenas uma das letras minúsculas abaixo para escolher uma opção:\n");
        printf("(a) Ler uma string S1 (tamanho máximo 20 caracteres);\n");
        printf("(b) Imprimir o tamanho da string S1;\n");
        printf("(c) Comparar a string S1 com uma nova string S2 fornecida pelo usuário e imprimir o resultado da comparação;\n");
        printf("(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenação;\n");
        printf("(e) Imprimir a string S1 de forma reversa;\n");
        printf("(f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse ser informado pelo usuário;\n");
        printf("(g) Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2. Os caracteres C1 e C2 serão lidos pelo usuário;\n");
        printf("(h) Verificar se uma string S2 é substring de S1. A string S2 deve ser informada pelo usuário;\n");
        printf("(i) Retornar uma substring da string S1. Informe a partir de qual posição deve ser criada a substring e qual é o tamanho da substring.\n");

        scanf(" %c", &c);

        if(c == 'a'){
            printf("Digite a string S1:\n");
            scanf("%s", s1);
            printf("\n");
            lido = 1;
        }

        if(c == 'b'){
            if(lido){
                int tamanho = strlen(s1);
                printf("O tamanho da string S1 é: %d\n\n", tamanho);
            }
            else{printf("A string S1 ainda não foi digitada.\n\n");}
        }

        if(c == 'c'){
            if(lido){
                char s2[20];
                printf("Digite a string S2:\n");
                scanf("%s", s2);

                int resultado = strcmp(s1, s2);
                if (resultado == 0){
                    printf("As strings são iguais.\n\n");
                }
                else{
                    if (resultado > 0){
                        printf("S1 é lexicamente posterior a S2.\n\n");
                    }
                    else{printf("S1 é lexicamente anterior a S2.\n\n");}
                }
            }
            else{printf("A string S1 ainda não foi digitada.\n\n");}
        }

        if(c == 'd'){
            if(lido){
                char s2[20], concatenado[40];
                printf("Digite a string S2:\n");
                scanf("%s", s2);

                for(int i=0; i<strlen(s1);i++){
                    concatenado[i] = s1[i];
                }
                int tam = strlen(s1);
                for(int i=0; i<strlen(s2);i++){
                    concatenado[i+tam] = s2[i];
                }

                printf("O resultado da concatenação:\n%s\n\n", concatenado);
            }
            else{printf("A string S1 ainda não foi digitada.\n\n");}
        }

        if(c == 'e'){
            if(lido){
                printf("A string S1 ao contrário:\n");
                int size = strlen(s1);
                for (int i = size-1; i>=0; i--){
                    if (i == 0){printf("%c\n\n", s1[i]);}
                    else{printf("%c", s1[i]);}
                }
            }
            else{printf("A string S1 ainda não foi digitada.\n\n");}
        }

        if(c == 'f'){
            if(lido){
                printf("Digite o caracter:\n");
                char a;
                scanf(" %c", &a);
                int size = strlen(s1);
                int freq = 0;
                for (int i=0; i<size; i++){
                    if (s1[i]==a){freq++;}
                }
                printf("O caractere %c aparece %d vezes na string S1\n\n", a, freq);
            }
            else{printf("A string S1 ainda não foi digitada.\n\n");}
        }

        if(c == 'g'){
            if(lido){
                printf("Digite o caractere C1:\n");
                char c1, c2;
                scanf(" %c", &c1);
                printf("Digite o caractere C2:\n");
                scanf(" %c", &c2);
                
                int size = strlen(s1);
                int achou = 0;
                for (int i=0; i<size; i++){
                    if (s1[i]==c1){
                        s1[i] = c2;
                        achou = 1;
                        break;
                    }
                }

                if(achou){printf("A nova string S1:\n%s\n\n", s1);}
                else{printf("O caractere %c não consta na string S1.\n\n", c1);}

            }
            else{printf("A string S1 ainda não foi digitada.\n\n");}
        }

        if(c == 'h'){
            if(lido){
                char s2[20];
                printf("Digite a string S2:\n");
                scanf("%s", s2);
                
                if(strlen(s2) > strlen(s1)){
                    printf("S2 é maior que S1, portanto não é um segmento.\n\n");
                }
                else{
                    if(strcmp(s1, s2) == 0){printf("S1 e S2 são iguais, portanto a string S2 é segmento de S1");}
                    else{
                        int match;
                        int dif = strlen(s1) - strlen(s2);
                        for(int i=0; i<dif; i++){
                            for(int j=0; j<strlen(s2); j++){
                                if(s1[i+j] == s2[j]){
                                    match = 1;
                                }
                                else{
                                    match = 0;
                                    break;
                                }
                            }
                        }
                        if(match){printf("A string S2 é uma substring de S1:\nS2: %s\nS1: %s\n\n", s2, s1);}
                        else{printf("A string S2 não é uma substring de S1\n\n");}
                    }
                }
            }
            else{printf("A string S1 ainda não foi digitada.\n\n");}
        }

        if(c == 'i'){
            if(lido){
                char sub_s1[20];
                int partida, tam, percorre = 0;
                printf("Digite a partir de qual posição quer criar a substring:\n");
                scanf("%d", &partida);

                printf("Agora digite o tamanho da substring:\n");
                scanf("%d", &tam);
                
                int lim = partida+tam-1;
                if (lim >= strlen(s1)){
                    for(int i=partida; i<strlen(s1); i++){
                        sub_s1[percorre] = s1[i];
                        percorre++;
                    }
                }

                else{
                    for(int i=partida; i<lim; i++){
                        sub_s1[percorre] = s1[i];
                        percorre++;
                    }
                }

                printf("A substring: %s\n\n", sub_s1);
                
            }
            else{printf("A string S1 ainda não foi digitada.\n\n");}
        }

        printf("Deseja fazer mais alguma operação?\n");
        printf("Digite 1 para 'sim' e 0 para 'não'.\n");
        scanf("%d", &repeat);
        printf("\n");
    }

    return 0;
}
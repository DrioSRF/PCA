int main(){

    int inteiro = 5;
    float real = 3.2;
    char letra = 'r';

    int *pint = &inteiro;
    float *preal = &real;
    char *pletra = &letra;

    printf("Antes da alteracao:\n");
    printf("Inteiro: %d, ", inteiro);
    printf("Real: %.2f, ", real);
    printf("Caractere: %c\n\n", letra);

    *pint = 21;
    *preal = 5.1;
    *pletra = 's';

    printf("Depois da alteracao:\n");
    printf("Inteiro: %d, ", inteiro);
    printf("Real: %.2f, ", real);
    printf("Caractere: %c\n", letra);

    return 0;

}
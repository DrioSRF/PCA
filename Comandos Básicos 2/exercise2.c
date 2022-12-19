#include <stdio.h>

int main(){
	
	float nota1, nota2, nota3, nota4;
	
	printf("Digite suas quatro notas:\nNota1: ");
	scanf("%f", &nota1);
	
	printf("nota2: ");
	scanf("%f", &nota2);
	
	printf("nota3: ");
	scanf("%f", &nota3);
	
	printf("nota4: ");
	scanf("%f", &nota4);
	
	float media = (nota1 + nota2 + nota3 + nota4)/4;
	
	printf("A sua média é: %.2f", media);
	
}

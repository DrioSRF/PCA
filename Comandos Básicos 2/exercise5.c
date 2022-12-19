#include <stdio.h>

int main(){
	
	float lado;
	
	printf("Digite o tamanho do lado do quadrado: ");
	scanf("%f", &lado);
	
	float area = lado*lado;
	
	printf("A área do quadrado é: %.2f\n", area);
	printf("O dobro da área é: %.2f", area*2);
	
}

#include <stdio.h>

int main(){
	
	float altura;
	
	printf("Digite a sua altura: ");
	scanf("%f", &altura);
	
	float peso_ideal = (72.7*altura) - 58;
	
	printf("Seu peso ideal é: %.2f", peso_ideal);
	
}

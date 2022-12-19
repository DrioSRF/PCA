#include <stdio.h>

int main(){
	
	int num1, num2;
	
	printf("Digite um número inteiro: ");
	scanf("%d", &num1);
	
	printf("Digite mais um número inteiro: ");
	scanf("%d", &num2);
	
	float real;
	
	printf("Digite um número real: ");
	scanf("%f", &real);
	
	float conta = (2*num1) * (num2/2);
	
	printf("O produto do dobro do primeiro com metade do segundo é: %.2f\n", conta);
	
	conta = (3*num1) + real;
	
	printf("A soma do triplo do primeiro com o terceiro é: %.2f\n", conta)
	
	conta = real*real*real;
	
	printf("O terceiro elevado ao cubo é: %.2f", conta);
	
}

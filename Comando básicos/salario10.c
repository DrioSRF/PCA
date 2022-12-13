#include <stdio.h>

int main(){

	float salario;

	printf("Digite o valor do salário\n");
	scanf("%f", &salario);

	salario = salario + (salario*0.1);

	printf("O valor reajustado do salário é: R$ %.2f", salario);

	return 0;

}

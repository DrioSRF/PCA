#include <stdio.h>

int main(){
	
	float ganho_hora, horas_trabalhadas;
	
	printf("Quanto você ganha por hora?\n");
	scanf("%f", &ganho_hora);
	
	printf("E o número de horas que você trabalha?\n");
	scanf("%f", &horas_trabalhadas);
	
	float salario = ganho_hora*horas_trabalhadas;
	
	printf("Seu salário é: R$ %.2f\n", salario);

}

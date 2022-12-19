#include <stdio.h>

int main(){
	
	float ganho_hora, horas_trabalhadas;
	
	printf("Quanto você ganha por hora?\n");
	scanf("%f", &ganho_hora);
	
	printf("E o número de horas que você trabalha?\n");
	scanf("%f", &horas_trabalhadas);
	
	float salario = ganho_hora*horas_trabalhadas;
	
	float imposto_renda = salario*0.11;
	
	float inss = salario*0.08;
	
	printf("R$ %.2f para o INSS\n", inss);
	
	float sindicato = salario*0.05;
	
	printf("R$ %.2f para o sindicato\n", sindicato);
	
	salario = salario-imposto_renda-inss-sindicato;
	
	printf("Seu salário líquido é: R$ %.2f\n", salario);

}

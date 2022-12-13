#include <stdio.h>

int main(){
	
	float conta;
	
	printf("Digite o valor da conta:\n");
	scanf("%f", &conta);
	
	float garcom = conta*0.1;
	
	printf("O valor da percentagem do garçom é: R$ %.2f", garcom);
	
	return 0;
	
}

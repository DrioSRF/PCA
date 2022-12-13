#include <stdio.h>

int main(){
	
	char nome, sexo;
	int idade;
	
	printf("Digite seu primeiro nome:\n");
	scanf("%s", &nome);
	
	printf("Digite sua idade:\n");
	scanf("%d", &idade);
	
	printf("Digite H ou h para homem e M ou m para mulher\n");
	scanf("%s", &sexo);
	
	if (sexo == 'M' || sexo == 'm'){
		
		printf("E mulher");
		
	}
	
	else{
		
		printf("Nao e mulher");
		
	}
	
	return 0;
}

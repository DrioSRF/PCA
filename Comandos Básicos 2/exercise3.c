#include <stdio.h>

int main(){
	
	float metro;
	
	printf("Digite a distância em metro: ");
	scanf("%f", &metro);
	
	float centimetro = metro*100;
	
	printf("Esta medida em centímetro é: %.2f", centimetro);
	
}

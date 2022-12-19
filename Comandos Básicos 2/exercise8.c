#include <stdio.h>

int main(){
	
	float celsius;
	
	printf("Digite a temperatura em ºCelsius: ");
	scanf("%f", &celsius);
	
	float farenheit = (celsius*9/5) + 32;
	
	printf("A temperatura em ºFarenheit é: %.2f ºF\n", farenheit);

}

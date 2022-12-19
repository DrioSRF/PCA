#include <stdio.h>

int main(){
	
	float farenheit;
	
	printf("Digite a temperatura em ºFarenheit: ");
	scanf("%f", &farenheit);
	
	float celsius = (5 * (farenheit-32) / 9);
	
	printf("A temperatura em Celsius é: %.2f ºC\n", celsius);

}

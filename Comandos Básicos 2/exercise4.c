
#include <stdio.h>
#include <math.h>

int main(){
	
	float raio;
	
	printf("Digite o raio da circunferência: ");
	scanf("%f", &raio);
	
	float area = M_PI*raio*raio;
	
	printf("A área da circunferência de raio %.1f: %.2f", raio, area);
	
}

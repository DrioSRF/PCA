#include <stdio.h>

int main()
{
	
float base, altura, area;

printf("Digite o valor da base:\n");
scanf("%f", &base);

printf("Digite o valor da altura:\n");
scanf("%f", &altura);

area = base*altura / 2;
printf("O valor da área é: %f", area);

return 0;

}

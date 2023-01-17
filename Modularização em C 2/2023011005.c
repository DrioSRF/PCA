#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int binary_to_decimal(int binary){

    int decimal = 0;
    int power = 0;

    for (int i = binary; i > 0; i = i/10){
        decimal = decimal + ((i%10)*pow(2, power));
        power++;
    }

    return decimal;

}

int main(){

    int binary;
    
    printf("Type a binary number:\n");
    scanf("%d", &binary);

    int decimal = binary_to_decimal(binary);

    printf("The binary %d in decimal is: %d\n", binary, decimal);

    return 0;

}

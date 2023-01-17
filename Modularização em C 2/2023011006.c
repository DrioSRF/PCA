#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int decimal_to_binary(int decimal){

    int binary = 0;
    int num = 0;

    while (decimal > 0){

        binary = binary + ((decimal%2)*pow(10, num));
        num++;
        decimal = decimal/2;

    }

    return binary;

}

int main(){

    int decimal;
    
    printf("Type a decimal number:\n");
    scanf("%d", &decimal);

    int binary = decimal_to_binary(decimal);

    printf("The number %d in binary is: %d\n", decimal, binary);

    return 0;

}

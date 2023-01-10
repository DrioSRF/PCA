#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int weight_weeks (char option[7]){

    int read;
    
    if (!(strcmp(option, "Weight"))){

        printf("Type the weight:\n");
        scanf("%d", &read);
        return read;

    }

    else{

        printf("Type the number of weeks:\n");
        scanf("%d", &read);
        return read;

    }

}

void delivery_type(int weight, int weeks){

    if ((weight < 100)||(weeks < 28)){printf("Parto não deverá ser realizado, reavaliar clinicamente");}

    else{

        int months = (weeks - (weeks%4))/4;

        if ((weight > 2500) && (months > 7)){printf("Parto normal");}

        else{

            if((weight >= 1500) && (weight <= 2000) && (months > 9)){printf("Parto normal");}

            else{printf("Parto Cesariana");}
        }

    }

}

int main (){

    int weight = weight_weeks("Weight");
    int weeks = weight_weeks("Weeks");

    delivery_type(weight, weeks);

    return 0;

}

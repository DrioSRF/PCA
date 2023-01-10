#include <stdio.h>
#include <stdlib.h>

int scanIntIntervalo(){

    int x;
    printf("Type a value between 0 and 1000\n");
    scanf("%d", &x);

    while ((x < 0) || (x > 1000)){

        printf("This isn't a valid value\n");
        printf("Type again");
        scanf("%d", &x);

    }

    return x;

}

float percentual(int x, int y){

    float percent;

    if (x > y){

        percent = y*100/x;

    }

    else{

        percent = x*100/y;

    }

    return percent;

}

float absdif(float x, float y){

    float modulo;

    if (x > y){

        modulo = x - y;

    }

    else{

        modulo = y - x;

    }

    return modulo;

}

int main(){

    int x = scanIntIntervalo();
    int y = scanIntIntervalo();

    printf("Percentual do menor em realacao ao maior: %f\n", percentual(x, y));
    printf("O m�dulo da diferen�a entre o maior e o menor: %f\n", absdif(x, y));

}

#include <stdio.h>
#include <stdlib.h>

int matches(int x, int y){

    int match = 1;

    if (y > x){return !match;}

    else{

        int d, e;

        d = x%10;
        e = y%10;
        x = x/10;
        y = y/10;

        if (d != e){return !match;}

        while (y > 0){

            if (d != e){return !match;}

            d = x%10;
            e = y%10;
            x = x/10;
            y = y/10;

        }

        return match;

    }

}

int main(){

    int x, y, match;

    printf("Type an integer number: \n");
    scanf("%d", &x);

    printf("Type an integer number: \n");
    scanf("%d", &y);

    match = matches(x, y);

    if (match){printf("corresponde");}

    else{printf("não corresponde");}

}

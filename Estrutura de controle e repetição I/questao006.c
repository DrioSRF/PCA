#include <stdio.h>
#include <stdlib.h>

int main(){
	
	for(int i=1; i<11; i++){
		
		printf("Tabuada do %d\n", i);
		
		for(int j=1; j<11; j++){
			
			printf("%d + %d = %d    ", i, j, i+j);
			printf("%d - %d = %d    ", i, j, i-j);
			printf("%d x %d = %d    ", i, j, i*j);
			printf("%d / %d = %d\n", i*j, i, j*i/i);
		}
		
		printf("\n");
	}

}

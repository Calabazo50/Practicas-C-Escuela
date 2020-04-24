#include <stdio.h>

int main(){
	int numero, factor, limitar = 1;
	printf("Escribe un numero entre 1900 y 2000: ");
	scanf("%d", &numero);
	
	if(numero >= 1900 && numero <= 2000 || limitar == 0){
		printf("Los factores primos son: \n");	
		for(factor = 2; factor <= numero; factor++){
			while(numero % factor == 0){
				printf("%d ", factor);
				if(factor != numero) printf("* ");
				numero /= factor;
			}
		}
	}
	else printf("Solo números entre 1900 y 2000");

	return 0;
}

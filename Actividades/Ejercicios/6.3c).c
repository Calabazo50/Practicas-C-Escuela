#include <stdio.h>

int main(){
	int n;
	int suma = 0;
	
	printf("Los numeros del intervalo de 11 hasta 50 son: \n");
	for(n = 11; n<=50; n++){
		suma += n;
		printf("%i ", n);
	}
	printf("\nY la suma de estos es: %i", suma);
	return 0;
}


#include <stdio.h>

int main() {
	int tablaDel, numero = 1, resultado, hasta;

	printf("Que tabla de multiplicar quiere? (Ingrese un numero): ");
	scanf("%i", &tablaDel);
	printf("Hasta cuantos numeros quiere? (Ingrese un numero):");
	scanf("%i", &hasta);
	printf("\n");

	while (numero < hasta + 1) {
		resultado = numero * tablaDel;
		printf("%i x %i = %i \n", tablaDel, numero, resultado);
		numero++;
	}

	return 0;
}

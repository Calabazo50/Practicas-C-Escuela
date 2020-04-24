#include <stdio.h>

int esPar(int numero);

int main() {
	int x, inf, sup;

	printf("Ingrese el limite superior: ");
	scanf("%i", &sup);
	printf("Ingrese el limite inferior: ");
	scanf("%i", &inf);
	printf("\nSe mostraran los numeros desde %i hasta %i \n\n", inf, sup);

	printf("Para empezar los pares: \n");
	x = inf;
	do {
		if (esPar(x) == 1) {
			printf("%i ", x);
			x++;
		}
		else x++;
	} while (x >= inf && x <= sup);
	printf("\n\n");

	printf("Ahora los impares: \n");
	x = inf;
	do {
		if (esPar(x) == 0) {
			printf("%i ", x);
			x++;
		}
		else x++;
	} while (x >= inf && x <= sup);
	printf("\n");

	return 0;
}

int esPar(int numero) {
	if (numero % 2 == 0) return 1;
	else return 0;
}

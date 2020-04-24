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
	for (x = inf; x <= sup; x++) {
		if (esPar(x) == 1) {
			printf("%i ", x);
		}
	}
	printf("\n\n");

	printf("Ahora los impares: \n");
	for (x = inf; x <= sup; x++) {
		if (esPar(x) == 0) {
			printf("%i ", x);
		}
	}
	printf("\n");

	return 0;
}

int esPar(int numero) {
	if (numero % 2 == 0) return 1;
	else return 0;
}

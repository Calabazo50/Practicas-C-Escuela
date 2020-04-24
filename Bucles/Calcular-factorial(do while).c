#include <stdio.h>

int main() {
	int num;
	int x;

	printf("Ingrese el numero que desea calcular su factorial: ");
	scanf("%i", &num);

	printf("\nPara calcularlo se multiplica desde el %i hasta el 1. tal que asi: \n", num);

	x = num;
	printf("%i", num);
	do {
		x--;
		printf("x%i", x);
	} while (x > 1);
	printf("\n");

	return 0;
}

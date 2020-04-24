#include <stdio.h>

int main() {
	int num;
	int x;

	printf("Ingrese el numero que desea calcular su factorial: ");
	scanf("%i", &num);

	printf("\nPara calcularlo se multiplica desde el %i hasta el 1. tal que asi: \n", num);

	x = num;
	printf("%i", num);
	while (x > 1) {
		x--;
		printf("x%i", x);
	}
	printf("\n");

	return 0;
}

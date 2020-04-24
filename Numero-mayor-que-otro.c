#include <stdio.h>

int main() {
	int num1, num2, bResult;
	printf("Escribe el primer numero: ");
	scanf("%i", &num1);
	printf("Escribe el segundo numero: ");
	scanf("%i", &num2);
	bResult = num1 > num2;
	printf("\nEl primer numero es mayor que el segundo %i \n", bResult);

	return 0;
}

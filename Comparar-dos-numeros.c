#include <stdio.h>

int main() {
	int num1, num2;
	printf("Escribe el primer numero: ");
	scanf("%i", &num1);
	printf("Escribe el segundo numero: ");
	scanf("%i", &num2);
	if (num1 > num2) printf("\nEl primer numero es mayor que el segundo\n");
	else printf("\nEl primer numero no es mayor que el segundo\n");

	return 0;
}

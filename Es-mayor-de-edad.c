#include <stdio.h>

int main() {
	const int TRUE = 1;
	const int FALSE = 0;

	int edad = 0;
	int mayorEdad = FALSE;

	printf("Dame tu edad: ");
	scanf("%d", &edad);
	if (edad >= 18) {
		mayorEdad = TRUE;
	}
	printf("\n %d \n", mayorEdad);

	return 0;
}

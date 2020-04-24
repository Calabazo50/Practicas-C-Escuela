#include <stdio.h>

int main(){
	int numero1 = 1;
	int numero2 = 7;
	int numero3 = 12;
	int x;

	do {
		x = numero1 * numero2;
		printf("%i x %i = %i \n", numero1, numero2, x);
		numero1 += 1;
	} while (numero1 < numero3 + 1);

	return 0;
}
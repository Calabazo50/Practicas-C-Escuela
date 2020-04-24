#include <stdio.h>

int valMayor(int valor1, int valor2);
int valMenor(int valor1, int valor2);

int main() {
	int num1, num2, num3, elMayor, elMenor;
	char salir;
	printf("Escribe el primer numero: ");
	scanf("%d", &num1);
	printf("Escribe el segundo numero: ");
	scanf("%d", &num2);
	printf("Escribe el tercer numero: ");
	scanf("%d", &num3);
	printf("\n");
	if (num1 == num2 && num2 == num3) printf("Los tres numeros son iguales");
	else {
		elMayor = valMayor(num1, num2);
		elMayor = valMayor(elMayor, num3);
		elMenor = valMenor(num1, num2);
		elMenor = valMenor(elMenor, num3);

		printf("El numero mayor es: %d \n", elMayor);
		printf("El numero menor es: %d", elMenor);
	}
	printf("\n");

	printf("\nPresione enter para cerrar\n");
	scanf("%c", &salir);
	scanf("%c", &salir);

	return 0;
}

int valMayor(int valor1, int valor2) {
	int nValor;
	if (valor1 > valor2) nValor = valor1;
	else nValor = valor2;
	return nValor;
}
int valMenor(int valor1, int valor2) {
	int nValor;
	if (valor1 < valor2) nValor = valor1;
	else nValor = valor2;
	return nValor;
}

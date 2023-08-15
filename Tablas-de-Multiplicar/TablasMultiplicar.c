#include <stdio.h>

int main() {
	int multiplicador, inicio, final, pasos, resultado;

	printf("\n");
	printf("Tabla de multiplicar del: ");
	scanf("%i", &multiplicador);
    printf("Numero de inicio: ");
    scanf("%i", &inicio);
	printf("Numero final: ");
	scanf("%i", &final);
    printf("intervalo: ");
    scanf("%i", &pasos);
	printf("\n");

    printf("Se imprime la tabla del %i :D \n", multiplicador);
	for (int numero = inicio; numero <= final; numero += pasos){
		resultado = numero * multiplicador;
		printf("%i x %i = %i \n", multiplicador, numero, resultado);
	}

	return 0;
}
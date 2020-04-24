#include <stdio.h>

int main(){
	int inicio = 1;
	int multiplicador = 7;
	int	final = 12;
	int resultado;

	for (int x = inicio; x <= final; x++){
		resultado = x * multiplicador;
		printf("%i x %i = %i \n", x, multiplicador, resultado);
	}

	return 0;
}

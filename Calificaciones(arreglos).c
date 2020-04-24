#include <stdio.h>

int main(){
	float calif[8], promedio, suma = 0.0;

	for (int i = 0; i < 8; i++) {
		printf("Escribe la calificacion #%i: ", i+1);
		scanf("%f", &calif[i]);
		suma += calif[i]; //suma = suma + calif[i]
	}
	promedio = suma / 8;

	printf("\nEl primedio es: %.4f \n", promedio);

	return 0;
}

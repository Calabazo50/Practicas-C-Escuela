#include <stdio.h>

float valMayor(float valor1, float valor2);
float valMenor(float valor1, float valor2);

int main(){
	int intervalo, i;
	float datoMayor, datoMenor, suma, media;
	
	printf("Ingrese el tamaño del intervalo: ");
	scanf("%d", &intervalo);
	
	float datos[intervalo];
	for(i = 0; i < intervalo; i++){
		printf("Ingrese el dato #%d: ", i+1);
		scanf("%f", &datos[i]);
	}
	
	datoMayor = datos[0];
	datoMenor = datos[0];
	suma = datos[0];
	for(i = 0; i < intervalo; i++){
		datoMayor = valMayor(datoMayor, datos[i]);
		datoMenor = valMenor(datoMenor, datos[i]);
		suma += datos[i];
	}
	media = suma/intervalo;
	
	putchar('\n');
	printf("El dato menor es: %.1f \n", datoMenor);
	printf("El dato mayor es: %.1f \n", datoMayor);
	printf("La media es: %.1f \n", media);

	return 0;
}

float valMayor(float valor1, float valor2) {
	float nValor;
	if (valor1 > valor2) nValor = valor1;
	else nValor = valor2;
	return nValor;
}
float valMenor(float valor1, float valor2) {
	float nValor;
	if (valor1 < valor2) nValor = valor1;
	else nValor = valor2;
	return nValor;
}


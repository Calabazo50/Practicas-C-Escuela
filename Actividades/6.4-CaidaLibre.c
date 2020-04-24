// Programa que calcula la caída libre de un objeto

#include <stdio.h>
#include <math.h>

int i = 1;
float gravedad = 9.8, tiempo = 0, position = 0, altura = 0, velocidad = 0;

int realidad();
int main(){
	printf("Escriba La altura, expresada en metros, a la que esta situado el objeto: ");
	scanf("%f", &altura);
	do{
		realidad();
		if(position > 0){
		printf("seg %.0f,	altura: %.1f,	velocidad: %.1f \n", tiempo, position, velocidad);
		tiempo++;
		}
		else i = 0;	
	} while(i == 1);

	return 0;
}

int realidad(){
	position = (-0.5 * gravedad * tiempo * tiempo ) + altura;
	velocidad = gravedad * tiempo;
}

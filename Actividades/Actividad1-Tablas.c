/* Programa que da las tablas de suma, resta, multiplicaci�n y division. */

#include <stdio.h>
#include <math.h>

int sumar();
int restar();
int multiplicar();
int dividir();

int main(){
	int calculadora = 1;
	while(calculadora == 1){
		int	operacion;
		printf("que operacion desea? \n 1 -> sumar \n 2 -> restar \n 3 -> multiplicar \n 4 -> dividir \nEscriba el numero correspondiente: ");
		scanf("%i", &operacion);
		switch(operacion){
			case 1:	sumar(); break;
			case 2: restar(); break;
			case 3: multiplicar(); break;
			case 4: dividir(); break;
			default: printf("ERROR \n"); break;
		}
		do{
			printf("\n\nDesea volver a realizar otro calculo? (0 -> No / 1 -> Si): ");
			scanf("%i", &calculadora);
		}while(calculadora != 1 && calculadora != 0);
		printf("\n");
	}	
	return 0;
}

int sumar(){
	int num1, num2, suma;
	printf("Que tabla de sumar desea? (solo numeros del 1 al 10): ");
	scanf("%i", &num1);
	if(num1 >= 1 && num1 <= 10){
		for(num2 = 1; num2 <= 10; num2++){
			suma = num1 + num2;
			printf("\n %i + %i = %i", num1, num2, suma);
		}
	}
	else printf("Solo 1, 2, 3, 4, 5, 6, 7, 8, 9 y 10 estan permitidos");
}
int restar(){
	int num1, num2, resta;
	printf("Que tabla de restar desea? (solo numeros del 1 al 10): ");
	scanf("%i", &num1);
	if(num1 >= 1 && num1 <= 10){
		for(num2 = 1; num2 <= 10; num2++){
			resta = num1 - num2;
			printf("\n %i - %i = %i", num1, num2, resta);
		}
	}
	else printf("Solo 1, 2, 3, 4, 5, 6, 7, 8, 9 y 10 estan permitidos");
}
int multiplicar(){
	int num1, num2, multi;
	printf("Que tabla de multiplicar desea? (solo numeros del 1 al 10): ");
	scanf("%i", &num1);
	if(num1 >= 1 && num1 <= 10){
		for(num2 = 1; num2 <= 10; num2++){
			multi = num1 * num2;
			printf("\n %i * %i = %i", num1, num2, multi);
		}
	}
	else printf("Solo 1, 2, 3, 4, 5, 6, 7, 8, 9 y 10 estan permitidos");
}
int dividir(){
	float num1, num2, divi;
	printf("Que tabla de dividir desea? (solo numeros del 1 al 10): ");
	scanf("%f", &num1);
	if(num1 >= 1 && num1 <= 10){
		for(num2 = 1; num2 <= 10; num2++){
			divi = num1 / num2;
			printf("\n %.0f / %.0f = %.2f", num1, num2, divi);
		}
	}
	else printf("Solo 1, 2, 3, 4, 5, 6, 7, 8, 9 y 10 estan permitidos");
}

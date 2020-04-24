#include <stdio.h>
#include <math.h>

float pi(int dig);

int main(){
	int exactitud, i;
	printf("Ingrese un numero mayor a 0 que represente la exactitud de pi: ");
	scanf("%d", &exactitud);
	printf("El valor de pi es: \n");
	if(exactitud == 0) putchar('0');
	else{
		printf(" %.16f", pi(exactitud));
	}
	
	return 0;
}

float pi(int dig){
	float valor, i;
	if(dig <= 1) return 3;
	else{
		valor = 3;
		for(i=2; i < dig * 4; i += 4){
			valor += 4/(i*(i+1)*(i+2)) - 4/((i+2)*(i+3)*(i+4));
		}
		return valor;
	}
}

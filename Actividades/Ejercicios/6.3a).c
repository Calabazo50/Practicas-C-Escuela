#include <stdio.h>

int main(){
	int i;
	float suma = 0.0;
	for(i = 2; i <= 50; i++){
		suma += (1/i);
	}
	printf("La suma es: %.2f", suma);
	return 0;
}


#include <stdio.h>

int main(){
	int lim, fact = 1, resul = 0, num, n;
	
	printf("Escribe el limite: ");
	scanf("%i", &lim);
	printf("La secuencia es: \n");
	
	for(num = 1; num <= lim; num++){
		printf("%i! ", num);
		if(num < lim) printf("+ ");
		for(n = 1; n <= num; n++){
			fact *= n;
		}
		resul += fact;
		fact = 1;
	}
	printf("\nY la suma de esta es: %i", resul);
	
	return 0;
}

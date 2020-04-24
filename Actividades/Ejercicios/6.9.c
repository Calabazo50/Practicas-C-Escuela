#include <stdio.h>

int main(){
	int n, x, lim, i = 1, potencia = 1;
	printf("Escribe un numero entero: ");
	scanf("%i", &n);
	printf("Ingrese la potencia limite: ");
	scanf("%i", &lim);
	
	if(lim < 1) printf("Solo numeros mayores a 1 son validos");
	else{
		while (i <= lim){
			for(x = 1; x <= i; x++){
				potencia *= n;
			}
			printf("%i^%i=%i \n", n, i, potencia);
			potencia = 1;
			i++;
		}
	}
	return 0;
}


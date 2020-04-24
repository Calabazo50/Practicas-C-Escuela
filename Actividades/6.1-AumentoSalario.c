#include <stdio.h>

int main(){
	float newSalario;
	int i, salario;
	int contInf[4]={0,9001,15001,20001};
	int contSup[4]={9000,15000,20000,1000000000};
	int aumento[4]={20,10,5,0};
	
	printf("Escribe el salario que recibe anualmente: $");
	scanf("%d", &salario);
	
	for(i = 0; i < 4; i++){
		if(salario >= contInf[i] && salario <= contSup[i]){
			newSalario = salario + (salario * (aumento[i]*0.01));
			printf("\nRecibirá un aumento de: %d", aumento[i]);
			putchar('%');
		}
	}
	printf("\nEl nuevo salario sera: $%f \n", newSalario);
	return 0;
}

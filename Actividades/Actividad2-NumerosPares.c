#include <stdio.h>

void menu();
void almacenar();
void mostrarContenido();
void suma();

int numPares[50], proceso = 1;

int main(){
	while(proceso){
		menu();
	}
	return 0;
}

void menu(){
	int opcion;
	printf("  1 -> Almacenar los primero 100 numeros pares \n");
	printf("  2 -> Mostrar los numeros almacenados \n");
	printf("  3 -> Calcular la suma de los numeros y mostarla \n");
	printf("  4 -> Salir del programa \n");
	
	do{
		printf("introduzca la opcion deseada: ");
		scanf("%i", &opcion);
	}while(opcion < 1 || opcion > 4);
	
	switch(opcion){
		case 1: almacenar(); break;
		case 2: mostrarContenido(); break;
		case 3: suma(); break;
		case 4: 
			proceso = 0; 
			printf("\nPrograma detenido \n");
			break;
		default: printf("\n Error! \n\n"); break;
	}
	return;
}

void almacenar(){
	int num = 1, i = 0;
	printf("\nSe almacenaran los numeros pares del 1 al 100");
	do{
		if(num % 2 == 0){
			numPares[i] = num;
			i++;
		}
		num++; 
	}while(num <= 100);
	printf("\nNumeros almacenados correctamente \n\n");
	return;
}
void mostrarContenido(){
	int i;
	printf("\nSe mostraran los nuneros almacenados: \n");
	for(i=0; i<50; i++){
		printf("%i \n", numPares[i]);
	}
	printf("\n");
	return;
}
void suma(){
	int i, resultado = 0;
	printf("\nSe calculara la suma de los numeros almacenados");
	for(i=0; i<50; i++){
		resultado += numPares[i];
	}
	printf("\nEl resultado de la suma es: %i \n\n", resultado);
	return;
}


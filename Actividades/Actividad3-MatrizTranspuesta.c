/* Programa que crea una matriz 4x4 y su traspuesta */
#include <stdio.h>

void menu();
void trasponer();
void crear();
void imprimir();
void imprimirTraspuesta();

int proceso = 1;
int matriz[4][4] = {
	{0,0,0,0},
	{0,0,0,0},
	{0,0,0,0},
	{0,0,0,0}
};
int traspuesta[4][4] = {
	{0,0,0,0},
	{0,0,0,0},
	{0,0,0,0},
	{0,0,0,0}
};

int main(){
	while(proceso){
		menu();
	}
	return 0;
}

void menu(){
	int opcion;
	printf("  1 -> Ingresar datos de la matriz \n");
	printf("  2 -> Crear matriz Traspuesta \n");
	printf("  3 -> Imprimir matriz \n");
	printf("  4 -> Imprimir matriz transpuesta \n");
	printf("  5 -> Salir del programa \n");
	
	do{
		printf("introduzca la opcion deseada: ");
		scanf("%i", &opcion);
	}while(opcion < 1 || opcion > 5);
	
	switch(opcion){
		case 1: crear(); break;
		case 2: trasponer(); break;
		case 3: imprimir(); break;
		case 4: imprimirTraspuesta(); break;
		case 5: 
			proceso = 0; 
			printf("\nPrograma detenido \n");
			break;
		default: printf("\n Error! \n\n"); break;
	}
	return;
}

void crear(){
	int filas, columnas;
	printf("\nSe creara una tabla 4x4 con los datos que introduzca \n");
	for(filas = 0; filas < 4; filas++){
		for(columnas = 0; columnas < 4; columnas++){
			printf("Ingrese el numero de la fila %i, columna %i: ", filas+1, columnas+1);
			scanf("%i", &matriz[filas][columnas]);
		}
	}
	printf("Datos ingresados correctamente\n\n");
	return;
}
void trasponer(){
	int filas, columnas;
	printf("\nSe creara la matriz transpuesta");
	for(filas = 0; filas < 4; filas++){
		for(columnas = 0; columnas < 4; columnas++){
			traspuesta[columnas][filas] = matriz[filas][columnas];
		}
	}
	printf("\nMatriz creada correctamente \n\n");
	return;
}
void imprimir(){
	int filas, columnas;
	printf("\nSe imprimira la tabla 4x4 sin trasponer\n\n");
	
	for(filas = 0; filas < 4; filas++){
		for(columnas = 0; columnas < 4; columnas++){
			printf("%i ", matriz[filas][columnas]);
		}
		putchar('\n');
	}
	putchar('\n');
	return;
}
void imprimirTraspuesta(){
	int filas, columnas;
	printf("\nSe imprimira la tabla 4x4 sin trasponer\n\n");
	
	for(filas = 0; filas < 4; filas++){
		for(columnas = 0; columnas < 4; columnas++){
			printf("%i ", traspuesta[filas][columnas]);
		}
		putchar('\n');
	}
	putchar('\n');
	return;
}

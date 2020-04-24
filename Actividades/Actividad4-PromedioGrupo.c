#include <stdio.h>

void menu();
void ingresarDatos();
void promedios();
void mostrar();

int proceso = 1, crearMatriz = 1, grupo = 0, materias = 0, alumno, materia;
float matriz[100][50];
float sumaCalif[100];
float promedio[100];


int main() {
	while(proceso == 1) menu();
	return 0;
}

void menu(){
	int opcion;
	printf("  1 -> Ingresar los datos \n");
	printf("  2 -> Calcular Promedios \n");
	printf("  3 -> Mostrar resultados \n");
	printf("  0 -> Salir del programa \n");
	
	do{
		printf("introduzca la opcion deseada: ");
		scanf("%i", &opcion);
	}while(opcion < 0 || opcion > 3);
	
	switch(opcion){
		case 1: ingresarDatos(); break;
		case 2: promedios(); break;
		case 3: mostrar(); break;
		case 0: 
			proceso = 0; 
			printf("\nPrograma detenido \n");
			break;
		default: printf("\n Error! \n\n"); break;
	}
	return;
}
void ingresarDatos(){
	if(crearMatriz == 0){
		putchar('\n');
		do{
			printf("Desea cambiar el grupo y las materias? (1=SI/0=NO) ");
			scanf("%i", &crearMatriz);
		}while(crearMatriz != 1 && crearMatriz != 0);
	}
	if(crearMatriz == 1){
		putchar('\n');
		printf("Ingrese la magnitud del grupo: ");
		scanf("%i", &grupo);
		printf("Ingrese el numero de materias: ");
		scanf("%i", &materias);
		crearMatriz = 0;
	}
	putchar('\n');
	for(alumno = 0; alumno < grupo; alumno++){
		for(materia = 0; materia < materias; materia++){
			printf("Ingresar la calificacion %i del alumno %i: ", materia + 1, alumno + 1);
			scanf("%f", &matriz[alumno][materia]);
		}
		putchar('\n');
	}
	putchar('\n');
	return;
}
void promedios(){
	printf("\nSe calcularan los promedios de cada alumno \n\n");
	for(alumno = 0; alumno < grupo; alumno++) sumaCalif[alumno] = 0;
	for(alumno = 0; alumno < grupo; alumno++){
		for(materia = 0; materia < materias; materia++){
			sumaCalif[alumno] += matriz[alumno][materia];	
		}
		promedio[alumno] = sumaCalif[alumno]/materias;
		printf("Se calculo el promedio del alumno %i \n", alumno + 1);
	}
	if(grupo > 0 && materias > 0) printf("\nSe calcularon todos los promedios correctamente \n\n");
	else printf("No existen datos para calcular los promedios \n\n");
	return;
}
void mostrar(){
	printf("\nA continacion se mostraran los promedios almacenados \n\n");
	if(promedio[0] != 0){
		for(alumno = 0; alumno < grupo; alumno++){
			printf("El promedio del alumno %i es: %.1f \n", alumno + 1, promedio[alumno]);
		}
		printf("\nSe mostraron los promedios correctamente \n\n");
	}
	else printf("No existen datos de los promedios \n\n");
	return;
}

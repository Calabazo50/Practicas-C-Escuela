#include <stdio.h>

//Prototipos
int calcularSalario();

//variables
float sumaSalarios = 0, sumaHorasExtra = 0, promedioSalarios;

//Programa
int main(){
	int t;
	for(t = 1; t <= 10; t++){
		printf("Trabajador #%i \n", t);
		calcularSalario(t);
	}
	promedioSalarios = sumaSalarios/10;
	
	printf("El primedio de los salarios es: $%.2f \n", promedioSalarios);
	printf("El numero total de horas extras es: %i \n", sumaHorasExtra);
	
	return 0;
}

//sub proceso
int calcularSalario(int Trabajador){
	int i, num, salario, horas, horasSemanales, horasExtra = 0;
	float pagoExtra, pagoHora, newSalario, pagoNeto, newPagohora, impuesto;
	
	int Inf[4]={0,9001,15001,20001};
	int Sup[4]={9000,15000,20000,1000000000};
	int aumento[4]={20,10,5,0};
	
	printf("Escribe el salario que recibe anualmente: $");
	scanf("%i", &salario);
	printf("Escribe las horas trabajadas por semana: ");
	scanf("%i", &horas);
	
	if(horas > 37){
		horasExtra = horas - 37;
		horasSemanales = 37;
	} 
	else horasSemanales = horas;

	pagoHora = salario / (horasSemanales + 1.5*horasExtra);

	for(i = 0; i < 4; i++){
		if(salario >= Inf[i] && salario <= Sup[i]){
			newPagohora = pagoHora + (pagoHora * (aumento[i]*0.01));
			num = i;
		}
	}
	
	pagoExtra = (newPagohora * 1.5)*horasExtra;	
	newSalario = newPagohora*horasSemanales + pagoExtra;
	if(newSalario > 8000) impuesto = newSalario*0.16;
	else impuesto = newSalario*0.08;
	pagoNeto = newSalario - impuesto;

	printf("\nUsted trabaja %i horas semanales y %i horas extra", horasSemanales, horasExtra);
	printf("\nRecibe $%.2f de pago por cada hora trabajada", pagoHora);
	printf("\nDebido a que su salario es mayor a %i y menor a $%i recibe un aumento de $%i%%", Inf[num], Sup[num], aumento[num]); //'%%' se imprime como "%"
	printf("\n\nPor ello el nuevo pago por hora sera: $%.2f", newPagohora);
	/*if(horasExtra > 0)*/ printf("\nRecibirá $%.2f de pago por horas extras", pagoExtra);
	printf("\nSu salario sin impuestos es: $%.2f", newSalario);
	printf("\nLos impuestos correspondientes a su salario son $%.2f", impuesto);
	printf("\n\nEl nuevo salario sera: $%.2f \n\n\n\n\n", pagoNeto);

	sumaSalarios += pagoNeto;
	sumaHorasExtra += horasExtra;
}


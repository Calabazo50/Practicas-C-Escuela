#include <stdio.h>

int main() {
	float horas, pagoHora, impuestos, pagoTrabajador;
	char salir;
	printf("Cuanto es la tasa de impuestos? ");
	scanf("%f", &impuestos);
	printf("Cuanto es el pago por cada hora? ");
	scanf("%f", &pagoHora);
	printf("Cuantas horas trabaja? ");
	scanf("%f", &horas);
	pagoTrabajador = (pagoHora*horas) - ((pagoHora*horas)*(impuestos / 100));
	printf("\nEl pago al trabajador es: %.001f\n", pagoTrabajador);

	printf("\nPresione enter para cerrar\n");
	scanf("%c", &salir);
	scanf("%c", &salir);

	return 0;
}

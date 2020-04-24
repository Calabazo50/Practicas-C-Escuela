#include <stdio.h>

int main() {
	int pagoHora, horas, horasNormales, horasDobles = 0, horasTriples = 0;
	float tasaImpuestos, impuestos, pago, pagoNormal, pagoDoble, pagoTriple, pagoTrabajador;
	char salir;
	int hsNormales = 40;
	int hsDobles = 8;
	int hsTriples = 4;

	printf("Cuanto es la tasa de impuestos? ");
	scanf("%f", &tasaImpuestos);
	printf("Cuanto es el pago por cada hora? ");
	scanf("%d", &pagoHora);
	printf("Cuantas horas trabaja por semana? ");
	scanf("%d", &horas);

	if (horas <= hsNormales + hsDobles + hsTriples) {
		if (horas > hsNormales) {
			horasDobles = horas - hsNormales;
			horas = hsNormales;
			if (horasDobles > hsDobles) {
				horasTriples = horasDobles - hsDobles;
				horasDobles = hsDobles;
			}
		}
		horasNormales = horas;

		pagoNormal = pagoHora * horasNormales;
		pagoDoble = (pagoHora * 2)*horasDobles;
		pagoTriple = (pagoHora * 3)*horasTriples;
		pago = pagoNormal + pagoDoble + pagoTriple;
		impuestos = pago * (tasaImpuestos/100);
		pagoTrabajador = pago - impuestos;

		printf("\nTrabaja: %d horas normales y por ellas le pagan: $%.2f \n", horasNormales, pagoNormal);
		printf("Trabaja: %d horas dobles y por ellas le pagan: $%.2f \n", horasDobles, pagoDoble);
		printf("Trabaja: %d horas triples y por ellas le pagan: $%.2f \n", horasTriples, pagoTriple);
		printf("Su sueldo sin impuestos es: $%.2f \n", pago);
		printf("Los impuestos aplicados al sueldo son: $%.2f \n\n", impuestos);
		printf("Su sueldo neto es de: $%.2f \n", pagoTrabajador);
	}
	else printf("\nNo es posible trabajar mas de 52 horas por semana\n");

	printf("\nPresione enter para cerrar\n");
	scanf("%c", &salir);
	scanf("%c", &salir);

	return 0;
}
#include <stdio.h>

int main() {
	int horas;
	float pagoXHora, horasDobles, horasTriples, porcImpuesto, pago, impuesto, salario;
	int repetir;

	do {
		char respuesta;
		repetir = 0;
		horasDobles = 0;
		horasTriples = 0;

		printf("Dame las horas trabajadas: ");
		scanf("%i", &horas);
		printf("Dame el pago por hora: ");
		scanf("%f", &pagoXHora);
		printf("Porcentaje de impuestos: ");
		scanf("%f", &porcImpuesto);
		printf("\n");

		switch (horas) {
		case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30: case 31: case 32: case 33: case 34: case 35: case 36: case 37: case 38: case 39: case 40:
			pago = horas * pagoXHora;
			impuesto = (pago * porcImpuesto) / 100;
			salario = pago - impuesto;
			break;

		case 41: case 42: case 43: case 44: case 45: case 46: case 47: case 48:
			pago = 40 * pagoXHora;
			horas = horas - 40;
			horasDobles = horas * (pagoXHora * 2);
			impuesto = ((pago + horasDobles)*porcImpuesto) / 100;
			salario = pago + horasDobles - impuesto;
			break;

		case 49: case 50: case 51: case 52:
			pago = 40 * pagoXHora;
			horasDobles = 8 * (pagoXHora * 2);
			horas = horas - 48;
			horasTriples = horas * (pagoXHora * 3);
			impuesto = ((pago + horasDobles + horasTriples)*porcImpuesto) / 100;
			salario = pago + horasDobles + horasTriples - impuesto;
			break;
		default:
			printf("Horas fuera de rango \n\n");
			break;
		}
		printf("Pago normal: $%.2f \n", pago);
		printf("Pago doble: $%.2f \n", horasDobles);
		printf("Pago triple $%.2f \n", horasTriples);
		printf("Impuesto: $%.2f% \n\n", impuesto);
		printf("Salario neto: $%.2f \n", salario);

		printf("\n");

		do {
			printf("Desea calcular nuevamente? 1 = si / 0 = no : ");
			scanf("%c", &respuesta);
			scanf("%c", &respuesta);
		} while (respuesta != '1' && respuesta != '0');
		if (respuesta == '1') {
			repetir = 1;
			printf("\n\n");
		}
		else repetir = 2;

	} while (repetir != 2);

	return 0;
}

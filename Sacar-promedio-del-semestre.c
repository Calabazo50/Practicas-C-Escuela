#include <stdio.h>

int main() {
	int Calif1, Calif2, Calif3, Calif4, Calif5, Calif6, Calif7, Calif8;
	float Promedio;
	printf("Introduce la calificacion 1: ");
	scanf("%d", &Calif1);
	printf("Introduce la calificacion 2: ");
	scanf("%d", &Calif2);
	printf("Introduce la calificacion 3: ");
	scanf("%d", &Calif3);
	printf("Introduce la calificacion 4: ");
	scanf("%d", &Calif4);
	printf("Introduce la calificacion 5: ");
	scanf("%d", &Calif5);
	printf("Introduce la calificacion 6: ");
	scanf("%d", &Calif6);
	printf("Introduce la calificacion 7: ");
	scanf("%d", &Calif7);
	printf("Introduce la calificacion 8: ");
	scanf("%d", &Calif8);
	Promedio = (Calif1 + Calif2 + Calif3 + Calif4 + Calif5 + Calif6 + Calif7 + Calif8) / 8;
	printf("\n El promedio es: %.1f \n", Promedio);

	return 0;
}

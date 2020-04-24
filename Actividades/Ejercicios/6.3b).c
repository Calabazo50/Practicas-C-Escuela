#include <stdio.h>

int main(){
	int n;
	float calif[10] = {10,5,7,9,6.5,9.8,9.8,8,7.5,8.8};
	
	printf("Las calificaciones del examen son: \n");
	for(n = 0; n < 10; n++){
		printf("Alumno #%i: %.1f \n", n+1, calif[n]);
	}
	return 0;
}


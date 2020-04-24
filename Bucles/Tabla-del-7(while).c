#include <stdio.h>

int main(){
	int a = 1;
	int b = 7;
	int f = 12;
	int r;

	while (a < f + 1) {
		r = a * b;
		printf("%i x %i = %i \n", a, b, r);
		a++;
	}

	return 0;
}

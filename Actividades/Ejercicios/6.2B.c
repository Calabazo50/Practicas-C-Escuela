#include <stdio.h>

int main() {
	double n = 2;
	for (; n > 0; n -= 0.5)
		printf("%lg ", n);
	return 0;
}


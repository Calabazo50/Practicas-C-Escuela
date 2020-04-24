#include <stdio.h>

int main(){
	int i, j, k;
	for(i = 1; i <= 3; i++)
		for(j = 1; j <= 3; j++){
			for(k = i; k <= j; k++)
				printf("%d %d %d \n", i, j, k);
			putchar('\n');
		}
	return 0;
}

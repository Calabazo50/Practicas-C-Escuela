#include <stdio.h>

int main(){
	int i, j, k;
	for(i = 3; i > 0; i--)
		for(j = 1; j <= 1; j++)
			for(k = i; k >= j; k--)
				printf("%d %d %d \n", i, j, k);
	return 0;
}


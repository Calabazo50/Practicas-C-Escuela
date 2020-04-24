#include <stdio.h>

int main(){
	int n, m;
	for(n=1; n<=10; n++)
		for(m=10; m >= 1; m--)
			printf("%d veces %d = %d \n", n, m, n*m);
	return 0;
}


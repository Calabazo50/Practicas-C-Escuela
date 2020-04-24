#include <stdio.h>

int main(){
	int i, j, m = 3, n = 5;
	for(i = n; i > 0; i--){
		for(j = m; j > 0; j--)
			putchar('*');
		putchar('\n');
	}
	return 0;
}


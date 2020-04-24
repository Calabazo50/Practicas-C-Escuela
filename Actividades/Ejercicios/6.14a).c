#include <stdio.h>

int main(){
	int i, j;
	for(i = 1; i <= 5; i++){
		printf(" %d \n", i);
		for(j = i; j >= 1; j -= 2)
			printf(" %d \n", j);
	}
}


#include <stdio.h>

int main(){
	int i, j;
	for(i = 1; i < 4; i++){
		printf(" %d ", i);
		for(j = i; j >= 1; j--)
			printf(" %d \n", j);
	}
}

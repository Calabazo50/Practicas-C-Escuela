#include <stdio.h>

int main(){
	int j, i = 0;
	while(i*i < 10){
		j = i;
		while(j*j < 100){
			printf("%d \n", i + j);
			j *= 2;
		}
		i++;
	}
	printf("\n*****\n");
}

#include <stdio.h>

int main(){
	int n = 0;
	
	int i = 1;
	while(i <= n){
		if((i % n) == 0){
			++i;
		}
	}
	printf("%d \n", i);
}


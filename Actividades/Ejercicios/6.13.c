#include <stdio.h>

int main(){
	int esp = 8, ast = 1, x, y;
	while(ast <= 9){
		for(x = 0; x < esp; x++)
			printf(" ");
		for(y = 0; y < ast; y++)
			printf("* ");
		printf("\n");
		esp -= 2;
		ast += 2;
	}
	esp += 4;
	ast -= 4;
	while(esp <= 8){
		for(x = 0; x < esp; x++)
			printf(" ");
		for(y = 0; y < ast; y++)
			printf("* ");
		printf("\n");
		esp += 2;
		ast -= 2;
	}
	return 0;
}

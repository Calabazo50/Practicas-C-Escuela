#include <stdio.h>

int main(){
	int siglo22[2] = {2101,2200};
	int year;
	printf("Los años bisiestos del siglo XXII son: \n");
	for(year = siglo22[0]; year <= siglo22[1]; year++){
		if(year % 4 == 0){
			if(year % 100 == 0){
				if (year % 400 == 0){
					printf("%d ", year);
				}
			}
			printf("%d ", year);
		}
	}
	return 0;
}


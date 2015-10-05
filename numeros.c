#include <stdio.h>

int main(){
	int result = 0;
	for(int numero = 1; numero <= 100; numero++){
		printf("%d, soma de todos = %d \n", numero, result);
		result+=numero;
	}
}
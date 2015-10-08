#include <stdio.h>
#include <stdlib.h>

int main(){
	int result, numero;
	printf("*************************************************\n");
	printf("*********** BEM VINDO A NOSSA TABUADA ***********\n");
	printf("*************************************************\n");
	printf("Escreva um número que você quer saber a tabuada ");
	scanf("%d", &numero);
	for (int i = 1; i <= 10; ++i){
		result = numero * i;
		printf("%d * %d = %d\n", numero, i, result);
	}

}
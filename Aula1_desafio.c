#include <stdio.h>

int main(){
	int x, y, result;
	printf("Olá, insira um numero por favor "); 
	scanf("%d", &x);
	printf("Agora insira numero por favor "); 
	scanf("%d", &y);
	result = x * y;
	printf("O resultado de %d * %d e %d\n", x, y, result);
}
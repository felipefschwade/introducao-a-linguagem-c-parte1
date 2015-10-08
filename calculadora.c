#include <stdio.h>
#include <stdlib.h>

int main() {
	int operacao;
	double a, b;
	double result;

	printf("********************************\n");
	printf("* Bem Vindo a Sua Calculadora! *\n");
	printf("********************************\n");
	printf("Digite um número ");
	scanf("%lf", &a);

	printf("Digite outro número ");
	scanf("%lf", &b);

	printf("Escolha entre:\n");
	printf("1 - Soma\n");
	printf("2 - Subtração\n");
	printf("3 - Divisão\n");
	printf("4 - Multiplicação\n");
	printf("Qual a opção desejada? ");
	scanf("%d", &operacao);
	switch(operacao){
		case 1:
			printf("Soma.\n");
			result = (double)a + (double)b;
			printf("%f + %f = %f\n", a, b, result);
			break;
		case 2:
			printf("Subtração\n");
			result = a - b;
			printf("%f - %f = %f\n", a, b, result);
			break;
		case 3:
			printf("Divisão\n");
			result = a / b;
			printf("%f / %f = %f\n", a, b, result);
			break;
		case 4:
			printf("Multiplicação\n");
			result = a * b;
			printf("%f * %f = %f\n", a, b, result);
			break;
		default:
			printf("%d não é uma operação valida!\n", operacao);
			break;
		}
	
}
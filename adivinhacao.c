#include <stdio.h>

int main(){
	printf("******************************************\n");
	printf("* Bem Vindo ao nosso jogo de adivinhacao *\n");
	printf("******************************************\n");

	int numerosecreto = 42;
	int chute;

	printf("Qual e o seu chute? ");
	scanf("%d", &chute);
	printf("Seu chute foi %d\n", chute);

	if (chute == numerosecreto){
		printf("Parabéns! Você acertou!\n");
		printf("Jogue de novo, você é um bom jogador!\n");
	} else {
		if (chute > numerosecreto){
			printf("Seu chute foi maior que o número secreto.\n");
		} else {
			printf("Seu chute foi menor que o número secreto.\n");
		}
	}
}
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
		printf("Você erro!\n");
		printf("Mas não desanime, tente de novo!\n");
	}
}
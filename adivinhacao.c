#include <stdio.h>
#define NUMERO_DE_TENTATIVAS 3

int main(){
	printf("******************************************\n");
	printf("* Bem Vindo ao nosso jogo de adivinhacao *\n");
	printf("******************************************\n");

	int numerosecreto = 42;
	int chute;

	for (int i = 1; i <= NUMERO_DE_TENTATIVAS; ++i){
		printf("Qual e o seu chute? ");
		scanf("%d", &chute);
		printf("Seu chute foi %d\n", chute);
		printf("Tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);
		int acertou = (chute == numerosecreto);	
		int maior = (chute > numerosecreto);
		if (acertou){
			printf("Parabéns! Você acertou!\n");
			printf("Jogue de novo, você é um bom jogador!\n");
			break;
			} 
		else if (maior){
			printf("Seu chute foi maior que o número secreto.\n");
		} else {
			printf("Seu chute foi menor que o número secreto.\n");
			}
	}
}
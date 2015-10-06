#include <stdio.h>

int main(){
	printf("******************************************\n");
	printf("* Bem Vindo ao nosso jogo de adivinhacao *\n");
	printf("******************************************\n");

	int numerosecreto = 42;
	int chute;
	int tentativas = 1;
	double pontos = 1000;

	while(1){
		printf("Tentativa %d\n", tentativas);
		printf("Qual e o seu chute? ");
		scanf("%d", &chute);
		printf("Seu chute foi %d\n", chute);
		if (chute < 0){
			printf("Você não pode chutar números negativos!\n");
			continue;
		}
		int acertou = (chute == numerosecreto);	
		int maior = (chute > numerosecreto);
		if (acertou){
			printf("Parabéns! Você acertou!\n");
			break;
			} 
		else if (maior){
			printf("Seu chute foi maior que o número secreto.\n");
		} else {
			printf("Seu chute foi menor que o número secreto.\n");
			}
		double pontosperdidos = (chute - numerosecreto) / 2.0;
		pontos-=pontosperdidos;
		tentativas++;
	}
	printf("Jogue de novo, você é um bom jogador!\n");
	printf("Número de pontos: %.1f\n", pontos);
}
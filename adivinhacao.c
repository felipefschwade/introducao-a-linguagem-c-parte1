#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	printf("******************************************\n");
	printf("* Bem Vindo ao nosso jogo de adivinhacao *\n");
	printf("******************************************\n");

	int segundos = time(0); //Definindo o número de segundos de 1/1/1970 até hoje
	srand(segundos); //Utilizando o número de segundos como formula parao Rand
	int numerogrande = rand();
	int numerosecreto = numerogrande % 100; //Definindo um número aleatório entre 0 e 100;
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
		double pontosperdidos = (chute - numerosecreto) / (double)2;
		pontos-=abs(pontosperdidos);
		tentativas++;
	}
	printf("Jogue de novo, você é um bom jogador!\n");
	printf("Número de pontos: %.1f\n", pontos);
}
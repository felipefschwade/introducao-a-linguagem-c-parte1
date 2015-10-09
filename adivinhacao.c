#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	printf(".______    _______ .___  ___.    ____    ____  __  .__   __.  _______    ______    __         \n"); 
	printf("|   _  \\  |   ____||   \\/   |    \\   \\  /   / |  | |  \\ |  | |       \\  /  __  \\  |  | \n");
	printf("|  |_)  | |  |__   |  \\  /  |     \\   \\/   /  |  | |   \\|  | |  .--.  ||  |  |  | |  |    \n");
	printf("|   _  <  |   __|  |  |\\/|  |      \\      /   |  | |  . `  | |  |  |  ||  |  |  | |  |      \n");
	printf("|  |_)  | |  |____ |  |  |  |       \\    /    |  | |  |\\   | |  '--'  ||  `--'  | |__|      \n");
	printf("|______/  |_______||__|  |__|        \\__/     |__| |__| \\__| |_______/  \\______/  (__)     \n\n");
	
	printf("Este é o nosso jogo de Adivinhação!\n");
	
	printf("     ???????      \n");
	printf("  ??:::::::??     \n");
	printf(" ??:::::::::::?   \n");
	printf(" ?:::::????:::::? \n");
	printf("?::::?    ?::::?  \n");
	printf("?::::?     ?::::? \n");
	printf("??????     ?::::? \n");
	printf("          ?::::?  \n");
	printf("         ?::::?   \n");
	printf("        ?::::?    \n");
	printf("       ?::::?     \n");
	printf("      ?::::?      \n");
	printf("      ?::::?      \n");
	printf("      ??::??      \n");
	printf("       ????       \n\n");
		                  
	printf("       ???        \n");
	printf("      ??:??       \n");
	printf("       ???        \n");
		                  

	int segundos = time(0); //Definindo o número de segundos de 1/1/1970 até hoje
	srand(segundos); //Utilizando o número de segundos como formula parao Rand
	int numerogrande = rand();
	int numerosecreto = numerogrande % 100; //Definindo um número aleatório entre 0 e 100;
	int chute, dificuldade, acertou, tentativas, redutor;
	double pontos = 1000;

	printf("Em qual nível deseja Jogar?\n");
	printf("(1)Fácil, (2)Médio, (3)Difícil\n");
	scanf("%d", &dificuldade);
	
	switch(dificuldade){
		case 1:
			printf("Fácil!\n");
			tentativas = 20;
			redutor = 7;
			break;
		case 2:
			printf("Médio!\n");
			tentativas = 10;
			redutor = 14;
			break;
		default:
			printf("Difícil!\n");
			tentativas = 6;
			redutor = 18;
			break;
	}

	for (int i = 1; i <= tentativas; ++i){

		printf("Tentativa %d\n", i);
		printf("Qual e o seu chute? ");
		scanf("%d", &chute);
		printf("Seu chute foi %d\n", chute);
		if (chute < 0){
			printf("Você não pode chutar números negativos!\n");
			continue;
		}
		acertou = (chute == numerosecreto);	
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
	}
	if (acertou){
		printf("Parabéns! Você Ganhou!\n\n");

		printf("		      OOOOOOOOOOO               \n");
		printf("	         OOOOOOOOOOOOOOOOOOO            \n");
		printf("	      OOOOOO  OOOOOOOOO  OOOOOO         \n");
		printf("	    OOOOOO      OOOOO      OOOOOO       \n");
		printf("	  OOOOOOOO  #   OOOOO  #   OOOOOOOO     \n");
		printf("	 OOOOOOOOOO    OOOOOOO    OOOOOOOOOO    \n");
		printf("	OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO    \n");
		printf("	OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO    \n");
		printf("	OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO    \n");
		printf("	 OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO    \n");
		printf("	  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
		printf("	    OOOOO   OOOOOOOOOOOOOOO   OOOO    \n");
		printf("	      OOOOOO   OOOOOOOOO   OOOOOO    \n");
		printf("	         OOOOOO         OOOOOO    \n");
		printf("	             OOOOOOOOOOOO    \n\n");

	} else {
		printf("Que pena, você perdeu!\n");
		printf("                                 oooo$$$$$$$$$$$$oooo                            \n");
		printf("	                      oo$$$$$$$$$$$$$$$$$$$$$$$$o							 \n");
		printf("	                   oo$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$o         o$   $$ o$'	 \n");
		printf("	   o $ oo        o$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$o       $$ $$ $$o$'	 \n");
		printf("	oo $ $ '$      o$$$$$$$$$    $$$$$$$$$$$$$    $$$$$$$$$o       $$$o$$o$'	 \n");
		printf("	'$$$$$$o$     o$$$$$$$$$      $$$$$$$$$$$      $$$$$$$$$$o    $$$$$$$$'		 \n");
		printf("	  $$$$$$$    $$$$$$$$$$$      $$$$$$$$$$$      $$$$$$$$$$$$$$$$$$$$$$$		 \n");
		printf("	  $$$$$$$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$    $$$$$$$$$$$$$$  '''$$$'		 \n");
		printf("	   '$$$'''$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     '$$$'		 \n");
		printf("	    $$$   o$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     '$$$o'	 \n");
		printf("	   o$$'   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$       $$$o'	 \n");
		printf("	   $$$    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$' '$$$$$$ooooo$$$$o'	 \n");
		printf("	  o$$$oooo$$$$$  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   o$$$$$$$$$$$$$$$$$' \n");
		printf("	  $$$$$$$$'$$$$   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     $$$$''''''''		 \n");
		printf("	 '''       $$$$    '$$$$$$$$$$$$$$$$$$$$$$$$$$$$'      o$$$'				 \n");
		printf("	            '$$$o     '''$$$$$$$$$$$$$$$$$$'$$'         $$$'				 \n");
		printf("	              $$$o          '$$''$$$$$$'''           o$$$'					 \n");
		printf("	               $$$$o                                o$$$''					 \n");
		printf("	                '$$$$o      o$$$$$$o'$$$$o        o$$$$'					 \n");
		printf("	                  '$$$$$oo     ''$$$$o$$$$$o   o$$$$'''	     				 \n");
		printf("	                     ''$$$$$oooo  '$$$o$$$$$$$$$''''						 \n");
		printf("	                        ''$$$$$$$oo $$$$$$$$$$''							 \n");
		printf("	                                ''''$$$$$$$$$$$'							 \n");
		printf("	                                    $$$$$$$$$$$$'							 \n");
		printf("	                                     $$$$$$$$$$''							 \n");
		printf("	                                      $$$'''''							     \n");

		pontos = pontos / (double)redutor;
	}
	printf("Número de pontos: %.1f\n", pontos);
}
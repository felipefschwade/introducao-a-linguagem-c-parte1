#include <stdio.h> -> Utilizado para incluir as bibliotecas da linguagem C
#include <stdlib.h> -> biblioteca padrão de C
#include <time.h> -> biblioteca de C que contém funções relacionadas a tempo.
#define SYMBOL value -> define uma constante.

int main() {/*Code*/} -> Função necessária para escrever programas em C
printf("%s\n"); -> Para imprimir algo na tela. 
tipo nomevariavel = valor -> Para Definir variáveis em C
printf("%d", var) -> Para imprimir variáveis do tipo inteiro;
scanf("%tipo", &variavel) -> Para realizar leituras do teclado (%d para int, %u para decimal sem sinal, %l para long int, %f para float, %lf para double); 
abs(numero) -> Para Conseguir o número absoluto de um número;
int num = rand() -> Para criar números aleatórios;
num % numero -> Para gerar restos de divisões entre 0 e numero;
srand(funcaonúmerica) -> Passa uma função para impedir o rand de gerar números iguais 
Sintaxe do For:g
for (int i = 0; i < count; ++i)
{
	/* code */
	break; -> para quebrar um loop
	continue; -> Não executa o resto do código porém continua o loop
}

gcc programa.c -o programa.extensão
gcc -std=c99 foo.c -o foo -> Para erros de definição do c99
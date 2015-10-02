#include <stdio.h> -> Utilizado para incluir as bibliotecas da linguagem C
int main() {/*Code*/} -> Função necessária para escrever programas em C
printf("%s\n"); -> Para imprimir algo na tela. 
tipo nomevariavel = valor -> Para Definir variáveis em C
printf("%d", var) -> Para imprimir variáveis do tipo inteiro;
scanf("%tipo", &variavel) -> Para realizar leituras do teclado; 

Sintaxe do For:g
for (int i = 0; i < count; ++i)
{
	/* code */
	break; -> para quebrar um loop
}

gcc programa.c -o programa.extensão
gcc -std=c99 foo.c -o foo -> Para erros de definição do c99
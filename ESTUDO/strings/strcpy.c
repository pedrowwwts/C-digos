#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20

int main(void)
{
	setlocale(LC_ALL, "Portuguese");

	char origem[N] = {"Olá, Mundo!"};
	char destino[N];

	printf("Antes do strcpy:\n");
	puts(origem);
	puts(destino);

	strcpy(destino, origem); // usado para alterar o conteúdo de uma string

	printf("Depois do strcpy:\n");
	puts(origem);
	puts(destino);
}
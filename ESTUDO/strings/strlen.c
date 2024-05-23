#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20

int main(void){
	setlocale(LC_ALL,"Portuguese");
	
	char s[N];
	int i;
	
	printf("Digite um texto: %d\n\n", i);
	gets(s);
	i = strlen(s); // tamanho da string que o usuario digitou
	printf("\nTamanho do Texto: %d\n\n", i);
	
	printf("Impressão de posição a posição:\n");
	for(i=0;i<strlen(s);i++){
		printf("%c", s[i]);
	}
	
	return 0;
}
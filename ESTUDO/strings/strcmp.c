#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main(void){
	setlocale(LC_ALL,"Portuguese");
	
	char hardText[N] = {"/exit"};
	char senha_usr[N];
	int ok;
	
	printf("Digite um texto:\n");
	gets(senha_usr);
	
	ok = strcmp(hardText,senha_usr); // comnpara iguldade entre as strings, se sim retorna o valor 0
	
	if(ok == 0)
	    printf("Textos iguais.\n");
	else
	    printf("Textos diferentes.\n");
	return 0;
}
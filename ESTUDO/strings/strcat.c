#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	char s1[N] = {"Lógica"};
   	char s2[N] = {"de Programação"};
   	
   	printf("Antes do strcat:\n");
   	printf("str1: %s\n", s1);
   	printf("str2: %s\n", s2);
   	
   	strcat(s1,s2); // usado para colar uma string na outra
   	
   	printf("Depois do strcat:\n");
   	puts(s1);
   	
  return 0;
}
#include <stdio.h>

int main(void){
  char s[10];

  printf("Digite algo (leitura pelo gets):\n");
  gets(s); // permite ler mais caracteres doq o tamanho da string propriamente dita
  fflush(stdin); // util para que a proxima leitura de dados via teclado, não dê problema, especificamente float e char

  puts("Resultado:");
  puts(s);  // imprime uma string diretamente na tela
  puts("");

  printf("Digite algo (leitura pelo fgets):\n");
  fgets(s, 10, stdin); // limita o tamanho da string
  fflush(stdin);

  puts("Resultado:");
  puts(s);

  return 0;
}
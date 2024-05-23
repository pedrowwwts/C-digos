#include <stdio.h>

int main(void)
{
  int n, i, soma = 0;

  scanf("%d", &n); // entrada do usuario

  int vetor[n];

  for (i = 0; i < n; i++)
  {
    scanf("%d", &vetor[i]); // entrada no vetor
    soma = soma + vetor[i];
  }

  printf("%d", soma); // saida do sistema

  return 0;
}
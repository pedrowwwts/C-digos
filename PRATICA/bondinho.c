#include <stdio.h>

int main(void)
{
  int a, m, soma;

  scanf("%d", &a);
  scanf("%d", &m);

  soma = a + m;

  if (soma <= 50)
  {
    printf("S");
  }
  else
  {
    printf("N");
  }

  return 0;
}
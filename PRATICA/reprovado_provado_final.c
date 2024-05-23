#include <stdio.h>

int main(void)
{
  int a, b, n;

  scanf("%d", &a);
  scanf("%d", &b);

  n = (a * 2 + b * 3) / 5; // media ponderada

  if (n < 3)
  {
    printf("Reprovado");
  }
  else if (n >= 7)
  {
    printf("Aprovado");
  }
  else
  {
    printf("Final");
  }

  return 0;
}

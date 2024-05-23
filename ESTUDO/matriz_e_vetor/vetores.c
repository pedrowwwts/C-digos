#include <stdio.h>

int main(void)
{

  int v[5] = {10, 20, 30, 40, 50}; // indices
  int i;
  float s = 0;

  for (i = 0; i < 5; i++)
  {
    s += v[i];  // s - vai somar os indices e dividir por 5 no final do programa, fazendo a média
  }

  printf("Resultado: %f\n", s / 5);

  return 0;
}
#include <stdio.h>
#include <math.h>

int main(void)
{
  float x, y, z;

  scanf("%f %f", &x, &y);

  z = pow(x, y); //pow(numero, potencia do numero)

  printf("%.4f", z);

  return 0;
}

#include <stdio.h>

int main()
{
  int a, b, n, i, l;  
  a = 0;
  b = 0;

  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
   
    scanf("%d", &l);
    if (l == 1)
    {
      a = !a;    //! - operador de negação, inverte o valor booleano
    }
    if (l == 2)
    {
      b = !b;
    }
  }

  printf("%d \n", a);
  printf("%d", b);

  return 0;
}
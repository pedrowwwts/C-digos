#include <stdio.h>

int main(void)
{
  int p, r;

  scanf("%d %d", &p, &r);

  if (p == 1 && r == 0)
  {
    printf("B");
  }
  else if (p == 0)
  {
    printf("C");
  }
  else
  {
    printf("A");
  }

  return 0;
}
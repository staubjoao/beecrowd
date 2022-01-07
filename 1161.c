#include <stdio.h>

int main()
{
  int m, n, i;
  long int r1 = 1, r2 = 1;
  long int soma;
  while (scanf("%d %d", &m, &n))
  {
    for (i = m; i > 0; i--)
      r1 *= i;
    for (i = n; i > 0; i--)
      r2 *= i;

    printf("%d\n", r1 + r2);
    r1 = 1;
    r2 = 1;
  }

  return 0;
}
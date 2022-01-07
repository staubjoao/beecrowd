#include <stdio.h>
#include <stdlib.h>

int main()
{
  int aux, j, i, n, *c1, *c2;
  scanf("%d", &n);
  c1 = malloc(sizeof(int) * n);
  c2 = malloc(sizeof(int) * n);
  for (i = 0; i < n; i++)
  {
    scanf("%d%d", &c1[i], &c2[i]);
  }

  for (i = 0; i < n; i++)
  {
    int resto, a, b;

    a = c1[i];
    b = c2[i];

    do
    {
      resto = a % b;

      a = b;
      b = resto;

    } while (resto != 0);

    printf("\n%d", a);
  }

  return 0;
}
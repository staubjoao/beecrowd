#include <stdio.h>
#include <stdlib.h>

int main()
{
  unsigned int c, n, i;
  float p, aux, acima;

  scanf("%u", &c);
  while (c)
  {
    aux = 0;
    acima = 0;
    scanf("%u", &n);

    unsigned int *m;
    m = malloc(n * sizeof(unsigned int));
    for (i = 0; i < n; i++)
    {
      scanf("%u", &m[i]);
      aux = aux + m[i];
    }

    aux = aux / n;

    for (i = 0; i < n; i++)
    {
      if (m[i] > aux)
        acima++;
    }

    p = (acima / n) * 100.000;
    printf("%.3f%c\n", p, '%');

    c--;
  }

  return 0;
}
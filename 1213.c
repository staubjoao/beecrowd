#include <stdio.h>

int main()
{
  long long int i, cont, a;

  while (scanf("%lli", &a) != EOF)
  {
    i = 1, cont = 1;
    while (i % a != 0)
    {
      i = (10 * i + 1) % a;
      cont++;
    }
    printf("%lli\n", cont);
  }

  return 0;
}
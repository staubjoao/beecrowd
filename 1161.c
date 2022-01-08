#include <stdio.h>

long int memo[21];

void fat(int a)
{
  int i;

  for (i = 2; i <= a; i++)
    memo[i] = memo[i - 1] * i;
}

int main()
{
  int m, n, i;
  memo[0] = 1;
  memo[1] = 1;
  for (i = 2; i < 21; i++)
    memo[i] = -1;
  long int soma;
  while (scanf("%d %d", &m, &n))
  {
    if (memo[m] == -1 && memo[n] == -1)
    {
      if (m >= n)
        fat(m);
      else
        fat(n);
    }
    soma = memo[m] + memo[n];
    printf("%d\n", soma);
  }
  return 0;
}
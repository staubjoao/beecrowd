#include <stdio.h>

int main()
{
  int i, m, n;
  long long int fat[21];

  while (scanf("%d %d", &m, &n) != EOF)
  {
    fat[0] = 1, fat[1] = 1, i = 1;
    while (m > i || n > i)
    {
      fat[i + 1] = fat[i] * (i + 1);
      i++;
    }

    printf("%lld\n", fat[m] + fat[n]);
  }

  return 0;
}
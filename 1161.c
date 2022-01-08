#include <stdio.h>
int main()
{
  int i;
  long long int m, n, x, y;

  while (scanf("%lld %lld", &m, &n))
  {
    x = 1;
    y = 1;
    for (i = m; i > 0; --i, m--)
      x *= m;

    for (i = n; i > 0; --i, n--)
      y *= n;

    printf("%lld\n", x + y);
  }

  return 0;
}
#include <stdio.h>
#include <math.h>

int opt(unsigned int a)
{
  int c = 0;

  while (a)
  {
    a /= 10;
    c++;
  }

  return c;
}

int main()
{
  unsigned int n, a, b, d, r;

  scanf("%u", &n);
  while (n)
  {
    scanf("%u %u", &a, &b);
    d = opt(b);
    d = ceil(pow(10, d));
    r = a % d;

    if (r == b)
      printf("encaixa\n");
    else
      printf("nao encaixa\n");

    n--;
  }

  return 0;
}
#include <stdio.h>
#include <math.h>

int primo(long long int x)
{
  unsigned int y = 0, i;
  for (i = 2; i <= sqrt(x); i++)
  {
    if (x % i == 0)
      y++;
  }
  if (y == 0)
    return 1;
  else
    return 0;
}

int main()
{
  unsigned int n;
  long long int x;

  scanf("%u", &n);
  while (n)
  {
    scanf("%lld", &x);
    if (primo(x))
      printf("Prime\n");
    else
      printf("Not Prime\n");
    n--;
  }

  return 0;
}
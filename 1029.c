#include <stdio.h>

int c;

int fib(int n)
{
  if (n == 0)
  {
    c++;
    return 0;
  }
  else if (n == 1)
  {
    c++;
    return 1;
  }
  else
  {
    c++;
    return fib(n - 1) + fib(n - 2);
  }
}

int main()
{
  int n, x, res;
  scanf("%d", &n);

  while (n)
  {
    c = 0;
    scanf("%d", &x);
    res = fib(x);
    printf("fib(%d) = %d calls = %d\n", x, c - 1, res);
    n--;
  }

  return 0;
}
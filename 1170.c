#include <stdio.h>

int main()
{
  int n, i = 1;
  float a, b;
  scanf("%d", &n);
  while (n > 0)
  {
    scanf("%f", &a);
    b = a / 2;
    while (b > 1)
    {
      b = b / 2;
      i++;
    }
    printf("%d dias\n", i);
    i = 1;
    n--;
  }
  return 0;
}
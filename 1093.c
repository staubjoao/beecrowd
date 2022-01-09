#include <stdio.h>
#include <math.h>

double opt(int x, int n2, int at)
{
  double y;

  if (at == 3)
  {
    return (double)x / (double)(x + n2);
  }
  else
  {
    y = 1.0 - (6 - at) / 6.0;
    y = (1 - y) / y;
    return (1.0 - pow(y, x)) / (1.0 - pow(y, x + n2));
  }
}

int main()
{
  int ev1, ev2, at, d, a;
  double p;

  while (scanf("%d %d %d %d", &ev1, &ev2, &at, &d), ev1 != 0 && ev2 != 0 && at != 0 && d != 0)
  {

    a = ev1;
    ev1 = 0;
    while (a > 0)
    {
      a -= d;
      ev1++;
    }

    a = ev2;
    ev2 = 0;
    while (a > 0)
    {
      a -= d;
      ev2++;
    }

    p = opt(ev1, ev2, at);
    printf("%.1f\n", p * 100);
  }

  return 0;
}
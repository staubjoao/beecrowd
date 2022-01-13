#include <stdio.h>
#include <math.h>

#define pi 3.1415926535897

int main()
{
  double a, b, c;
  double s, v, r, p, t;

  while (scanf("%lf %lf %lf", &a, &b, &c) != EOF)
  {
    s = ((a * b * c) / sqrt((a + b + c) * (b + c - a) * (c + a - b) * (a + b - c)));
    p = (a + b + c) / 2;
    t = sqrt(p * ((p - a) * (p - b) * (p - c)));
    r = t / p;
    s = (s * s * pi) - t;
    r = (r * r) * pi;
    v = t - r;
    printf("%.4lf %.4lf %.4lf\n", s, v, r);
  }

  return 0;
}
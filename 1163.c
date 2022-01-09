#include <stdio.h>
#include <math.h>

#define g 9.80665
#define pi 3.14159

double seno(double aph)
{
  return sin((aph * pi) / 180.0);
}

double cosseno(double aph)
{
  return cos((aph * pi) / 180.0);
}

int main()
{
  double vx, vy, v, x, a, h, aph, h0;
  int i, n, p1, p2;

  while (scanf("%lf", &h0) != EOF)
  {
    h = 0.0;
    scanf("%d %d", &p1, &p2);
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
      scanf("%lf %lf", &aph, &v);
      a = ((v * seno(aph)) * (v * seno(aph))) / (2 * g);
      h = h0 + a;
      vy = v * seno(aph);
      vx = v * cosseno(aph);
      x = ((vx * vy) / g) + (vx * (sqrt((2 * h) / g)));
      if (!(x >= p1 && x <= p2))
        printf("%.5lf -> NUCK\n", x);
      else
        printf("%.5lf -> DUCK\n", x);
    }
  }

  return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{
  float x1, x2, y1, y2, res;
  scanf("%f%f", &x1, &y1);
  scanf("%f %f", &x2, &y2);
  res = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
  printf("%.4f\n", res);
  return 0;
}
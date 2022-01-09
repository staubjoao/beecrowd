#include <stdio.h>
#include <string.h>

int main()
{
  unsigned int aux, v, n, i, val[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
  char sv[101];

  scanf("%u", &n);
  while (n)
  {
    scanf("%s", sv);

    v = 0;
    for (i = 0; i < strlen(sv); i++)
    {
      aux = (int)(sv[i] > 47 && sv[i] < 58) ? sv[i] - 48 : -1;
      v = v + val[aux];
    }
    printf("%d leds\n", v);
    n--;
  }

  return 0;
}
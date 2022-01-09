#include <stdio.h>
#include <string.h>
int main()
{
  char str[1000], c;
  unsigned n;
  unsigned short m, i, j, len;

  scanf("%u", &n);
  while (n)
  {
    scanf(" %[^\n]", str);

    len = strlen(str);
    m = len / 2;

    for (i = 0; i < len; i++)
    {
      if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        str[i] = str[i] + 3;
    }

    for (i = 0, j = len - 1; i < m; i++, j--)
    {
      c = str[i];
      str[i] = str[j];
      str[j] = c;
    }

    for (i = m; i < len; i++)
    {
      if ((str[i] >= 32 && str[i] <= 176))
        str[i] = str[i] - 1;
    }
    printf("%s\n", str);

    memset(str, 0, sizeof(str));
    n--;
  }

  return 0;
}
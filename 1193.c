#include <stdio.h>
#include <string.h>
#include <math.h>

int baseDecimal(char *str, int b)
{
  int i, ans = 0, power = 1, len = strlen(str);

  for (i = len - 1; i >= 0; --i, power *= b)
    if (str[i] >= '0' && str[i] <= '9')
      ans += ((int)str[i] - '0') * power;
    else
      ans += ((int)str[i] - 'a' + 10) * power;

  return ans;
}

char valueChar(int n)
{
  if (n >= 0 && n <= 9)
    return (char)(n + '0');
  else
    return (char)(n - 10 + 'a');
}

void rev(char *str)
{
  int i, len, max;
  len = strlen(str);
  max = len / 2;

  for (i = 0; i < max; ++i)
  {

    char tmp = str[i];
    str[i] = str[len - i - 1];
    str[len - i - 1] = tmp;
  }
}

char *decimalBase(int x, int base, char *dest)
{
  int idx = 0;

  while (x > 0)
    dest[idx++] = valueChar(x % base), x /= base;

  dest[idx] = '\0';
  rev(dest);
  return dest;
}

int strintInt(char *str)
{
  int tamanho, ret, multiplicador;

  for (tamanho = strlen(str) - 1, multiplicador = 1, ret = 0; tamanho >= 0; tamanho--, multiplicador *= 10)
    ret += (str[tamanho] - 48) * multiplicador;

  return ret;
}

int main()
{
  int n, caso = 0;
  char ans[1000];
  char num[1000], base[6];

  scanf("%d", &n);

  while (n > 0)
  {

    scanf("%s%*c%s", num, base);

    if (strcmp(base, "bin") == 0)
    {
      printf("Case %d:\n", ++caso);
      printf("%d dec\n", baseDecimal(num, 2));
      printf("%s hex\n\n", decimalBase(baseDecimal(num, 2), 16, ans));
    }
    else if (strcmp(base, "dec") == 0)
    {
      printf("Case %d:\n", ++caso);
      printf("%s hex\n", decimalBase(strintInt(num), 16, ans));
      printf("%s bin\n\n", decimalBase(strintInt(num), 2, ans));
    }
    else
    {
      printf("Case %d:\n", ++caso);
      printf("%u dec\n", baseDecimal(num, 16));
      printf("%s bin\n\n", decimalBase(baseDecimal(num, 16), 2, ans));
    }
    n--;
  }
  return 0;
}

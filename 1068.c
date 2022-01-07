#include <stdio.h>

int verificaBalancoParenteses(char *str)
{
  int qtd = 0;
  int i = 0;
  if (str[i] == ')')
    return 0;
  while (str[i] && qtd >= 0)
  {
    if (str[i] == '(')
      qtd++;
    if (str[i] == ')')
      qtd--;
    i++;
  }

  if (qtd == 0)
    return 1;
  else
    return 0;
}

int main()
{
  char expss[1100];

  while (scanf(" %s", expss) != EOF)
  {

    if (verificaBalancoParenteses(expss))
      printf("correct\n");
    else
      printf("incorrect\n");
  }

  return 0;
}
#include <stdio.h>

#define maxV 100

int cont, ver, ares, cnt, lbl[maxV], adj[100][100];

void path(int v)
{
  int i;
  lbl[v] = cnt++;

  for (i = 0; i < ver; i++)
  {
    if (adj[v][i] == 1)
    {
      if (lbl[i] == -1)
      {
        cont++;
        path(i);
      }
    }
  }
}

int main()
{
  int n, origem, destino, saida, v, i, j;

  scanf("%d", &n);
  while (n--)
  {
    cont = 0;
    scanf("%d %d", &saida, &ver);

    for (i = 0; i < ver; i++)
    {
      for (j = 0; j < ver; j++)
        adj[i][j] = 0;
    }
    scanf("%d", &ares);

    for (i = 0; i < ares; i++)
    {
      scanf("%d %d", &origem, &destino);
      adj[origem][destino] = 1;
      adj[destino][origem] = 1;
    }

    for (v = 0; v < ver; v++)
      lbl[v] = -1;

    cnt = 0;
    path(saida);
    printf("%d\n", cont * 2);
  }

  return 0;
}
#include <stdio.h>

int main()
{
    int n;
    int ano = 0, dia = 0, mes = 0;

    scanf("%d", &n);

    while (n >= 365)
        ano++, n -= 365;

    while (n >= 30)
        mes++, n -= 30;

    while (n >= 1)
        dia++, n--;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
    return 0;
}
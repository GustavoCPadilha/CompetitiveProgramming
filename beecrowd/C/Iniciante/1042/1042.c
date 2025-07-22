#include <stdio.h>

int main(void)
{
    int qtde;
    int num = 1;
    scanf("%d", &qtde);
    for (int i = 1; i <= qtde; i++)
    {
        printf("%d %d %d PUM\n", num, num+1, num+2);
        num += 4;
    }
}

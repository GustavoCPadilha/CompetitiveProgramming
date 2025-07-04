#include <stdio.h>

int main(void)
{
    int n;
    int nota_100 = 0;
    int nota_50 = 0;
    int nota_20 = 0; 
    int nota_10 = 0;
    int nota_5 = 0; 
    int nota_2 = 0;
    int nota_1 = 0;
    scanf("%d", &n);
    printf("%d\n", n);
    while (n > 0)
    {
        if (n >= 100)
        {
            nota_100++;
            n -= 100;
        }
        else if (n >= 50)
        {
            nota_50++;
            n -= 50;
        }
        else if (n >= 20)
        {
            nota_20++;
            n -= 20;
        }
        else if (n >= 10)
        {
            nota_10++;
            n -= 10;
        }
        else if (n >= 5)
        {
            nota_5++;
            n -= 5;
        }
        else if (n >= 2)
        {
            nota_2++;
            n -= 2;
        }
        else 
        {
            nota_1++;
            n -= 1;
        }
    }
    printf("%d nota(s) de R$ 100,00\n", nota_100);
    printf("%d nota(s) de R$ 50,00\n", nota_50);
    printf("%d nota(s) de R$ 20,00\n", nota_20);
    printf("%d nota(s) de R$ 10,00\n", nota_10);
    printf("%d nota(s) de R$ 5,00\n", nota_5);
    printf("%d nota(s) de R$ 2,00\n", nota_2);
    printf("%d nota(s) de R$ 1,00\n", nota_1);
}

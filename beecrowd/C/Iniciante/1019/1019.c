#include <stdio.h>

int main(void)
{
    int n, h = 0, m = 0, s = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        if (n >= 3600)
        {
            n -= 3600;
            h++;
        }
        else if (n >= 60)
        {
            n -= 60;
            m++;
        }
        else
        {
            s = n;
            n -= n;
        }
    }
    printf("%d:%d:%d\n",h,m,s);
}

#include <stdio.h>

int main (void)
{
    for (int i = 1; i < 101; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
}

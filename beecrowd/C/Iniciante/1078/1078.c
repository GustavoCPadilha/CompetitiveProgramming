#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	if (2 < n < 1000)
	{
		for (int i = 1; i <= 10; i++)
		{
			printf("%d x %d = %d\n", i, n, i * n);
		}
	}
}

#include <stdio.h>

int main(void) 
{
 	int a, b, maior;
 	scanf("%d", &maior);
 	scanf("%d", &a);
 	scanf("%d", &b);
 	if (maior < a)
 	{
 		maior = a;
 	}
 	if (maior < b)
 	{
 		maior = b;
 	}
 	printf("%d eh o maior\n", maior);
}

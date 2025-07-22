#include <stdio.h>

const int senha = 2002;

int main(void)
{
	int num;
	int exit = 0;
	while (!exit)
	{
		scanf("%d", &num);
		if (senha == num)
		{
			printf("Acesso Permitido\n");
			exit = 1;
		}
		else
		{
			printf("Senha Invalida\n");
		}
	}
}

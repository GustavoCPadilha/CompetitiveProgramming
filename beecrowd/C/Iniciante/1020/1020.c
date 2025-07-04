#include <stdio.h>

int main(void)
{
    int idade;
    int ano = 0;
    int mes = 0; 
    int dia = 0;
    scanf("%d", &idade);
    while (idade >= 30)
    {
        if (idade >= 365)
        {
            idade -= 365;
            ano++;
        }
        else if (idade >= 30)
        {
            idade -= 30;
            mes++;
        }
    }
    dia += idade;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
}

#include <stdio.h>

int main(void)
{
    double horas, velocidade;
    scanf("%lf", &horas);
    scanf("%lf", &velocidade);
    double gasto = (horas * velocidade) / 12;
    printf("%.3lf\n", gasto);
}

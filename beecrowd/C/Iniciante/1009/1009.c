#include <stdio.h>
 
int main(void) {
    char nome;
    double salario, vendas;
    scanf("%s", &nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);
    double total = salario + vendas * 0.15;
    printf("TOTAL = R$ %.2lf\n", total);
}

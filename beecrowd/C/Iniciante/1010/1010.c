#include <stdio.h>
 
int main(void) {
    int cod_1, num_1, cod_2, num_2;
    double valor_1, valor_2;
    scanf("%d", &cod_1);
    scanf("%d", &num_1);
    scanf("%lf", &valor_1);
    scanf("%d", &cod_2);
    scanf("%d", &num_2);
    scanf("%lf", &valor_2);
    double total = (num_1 * valor_1) + (num_2 * valor_2);
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
}

#include <stdio.h>
 
int main(void) {
    int num, horas;
    float valor;
    scanf("%d",&num);
    scanf("%d",&horas);
    scanf("%f",&valor);
    float salario = horas * valor;
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2f\n",salario);
}

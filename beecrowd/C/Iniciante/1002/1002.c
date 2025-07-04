#include <stdio.h>

int main(void) {
    double raio;
    scanf("%lf", &raio);
    double area = 3.14159 * raio * raio;
    printf("A=%.4f\n", area);
}

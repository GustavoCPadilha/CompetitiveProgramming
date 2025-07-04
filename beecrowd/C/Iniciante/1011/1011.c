#include <stdio.h>
#include <math.h>

int main(void) {
    double raio;
    scanf("%lf", &raio);
    double volume_esfera = (4.0/3.0) * 3.14159 * pow(raio, 3);
    printf("VOLUME = %.3lf\n", volume_esfera);
}

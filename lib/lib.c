#include <stdio.h>
#include "matematica.h"

int main()
{
    double angulo = 90;
    printf("Seno: %.2f\n", calcular_seno(angulo));
    printf("Cosseno: %.2f\n", calcular_cosseno(angulo));
    printf("Tangente: %.2f\n", calcular_tangente(angulo));
    return 0;
}
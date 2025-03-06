#include <stdio.h>
#include <math.h>

int main()
{
    int L = 2;
    float a1 = L * L;
    float a2 = (L * L)/2;
    float a3 = (2.0 * L);
    float a4 = (3.0/2.0 * L + L)/2;
    float a5 = (1.0/4.0 * L * L)/2;
    float at = a1 + a2 + a3 + a4 + a5;
    float pt = sqrt(pow(3.0/2.0*L,2) + pow(L,2)) + 2 * sqrt(pow(L,2) + pow(L,2)) + (3.0/2.0*L) + 2 * (1.0/4.0*L) + (2*L) + L/2 + L/2;
    printf("El valor del perimetro total es: %.2f\n", pt);
    printf("El valor del area total es: %.0f\n", at);
    return 0;
}

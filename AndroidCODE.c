#include <stdio.h>
#include <math.h>

int main()
{
    int L;
    L = 7;
    float pt = (23.0/5.0)*(L) + ((3.1416*L)/2);
    float at = pow(L,2) + 2 * 1.0/5.0 * L * (3.0/5.0 * L) + 2 * 1.0/5.0 * L * (1.0/5.0 * L) + (3.1416 * (L/2.0*L/2.0)) /2;
    printf("El valor del perimetro total es: %.4f\n", pt);
    printf("El valor del area total es: %.4f\n", at);
    return 0;
}

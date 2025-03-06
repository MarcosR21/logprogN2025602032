#include <stdio.h>

int main()
{
    int x, y;
    x = 2;
    y = 4;
    float z = ((float)1.0/x) + (x + y) /3.0 + 2 * x/y;
    printf("El valor de z es: %f", z);
    return 0;
}

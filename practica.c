#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int num, cubo;
    printf("Ingresa un numero entero: ");
    scanf("%i", &num);
    cubo = pow(num, 3);
    printf("El cubo de  %i es %i", num, cubo);
    return 0;
}

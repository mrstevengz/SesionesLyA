#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numbers [5];
    
    numbers[0] = 3;
    numbers[1] = 5;
    numbers[2] = 8;
    numbers[3] = 11;
    numbers[4] = 13;

    printf("Elemento #1 es: %d \n", numbers [0]);
    printf("Elemento #2 es: %d \n", numbers [1]);
    printf("Elemento #3 es: %d \n", numbers [2]);
    printf("Elemento #4 es: %d \n", numbers [3]);
    printf("Elemento #5 es: %d \n", numbers [4]);

    printf("\nSuma: \n");

    int suma = numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4];
    printf("La suma es %d \n", suma);

    return 0;
}

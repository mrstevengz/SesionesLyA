#include <stdio.h>

int suma(int num1, int num2);

int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("Dime el primer valor: ");
    scanf("%d", &num1);
    printf("Dime el segundo numero: ");
    scanf("%d", &num2);
    printf("La suma de %d + %d es\n", num1, num2);
    printf("%d", suma(num1, num2));
    return 0;
}


int suma(int num1, int num2){
    return num1 + num2;
}
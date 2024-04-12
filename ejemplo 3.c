#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*Leer la edad de una persona y decir si es mayor o menor de edad*/
    int edad;
    printf("Dime tu edad: ");
    scanf("%i", &edad);
    if (edad >= 18){
       printf("Eres mayor de edad");
    } else{
        printf("Eres menor de edad");
    }
    
    return 0;
}

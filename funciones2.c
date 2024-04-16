#include <stdio.h>

/*Calcular la nota de un estudiante que posee un acumulado de 60 puntos y un examen de 40. 
Decir si esta aprobado o reprobado. Aprueba si su nota es mayor o igual a 70*/


int calcFinalsc(int score, int exam);

int valFinalGrad(int score);

void pedirNotas();

int main(int argc, char const *argv[])
{
    /* code */
    pedirNotas();
    return 0;
}

void pedirNotas(){
    int acumulado, examen, notaFinal;
    printf("Dime el acumulado: ");
    scanf("%d", &acumulado);
    printf("Dime la nota del examen: ");
    scanf("%d", &examen);
    notaFinal = calcFinalsc(acumulado, examen);
    printf("Nota final %d\n", notaFinal);
}

int calcFinalsc(int score, int exam){
    return score + exam;
}
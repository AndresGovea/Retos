// reto1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Escriba un prgrama que calcule la calificación de Computadoras y programación considerando 3 parciales, 3 tareas y un proyecto.

#include <stdio.h>

int main()
{
    int parcial, tareas, proyecto, parcial1, tareas2, parcial2, tareas3, rparcial, rtareas, rproyecto, resultado;
    printf("Parcial 1 = ");
    scanf_s("%i", &parcial);
    printf("Parcial 2 = ");
    scanf_s("%i", &parcial1);
    printf("Parcial 3 = ");
    scanf_s("%i", &parcial2);
    printf("Tarea 1= ");
    scanf_s("%i", &tareas);
    printf("Tarea 2 = ");
    scanf_s("%i", &tareas2);
    printf("Tarea 3 = ");
    scanf_s("%i", &tareas3);
    printf("Proyecto = ");
    scanf_s("%i", &proyecto);
    rparcial = (parcial1 + parcial + parcial2) / 3;
    rtareas = (tareas + tareas2 + tareas3) / 3;
    resultado = (rtareas + rparcial + proyecto)/3;
    printf("Calificacion = %i", resultado);
    return 0;
}

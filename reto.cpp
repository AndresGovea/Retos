// reto.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>
/*Reto: Hacer un programa que lea un numero y determine cuando numeros 
seguidos se deben sumar para llegar o  sobrepasar ese numero
Ejemplo
Numero: 10
Se debe sumar el 1 al 5 para llegar al 10
Numero: 11
Se debe sumar el 1 al 6 para llegar al 11
*/
int main()
{
    //Declaramos variables
    int i = 1, numero;

    //Pedimos y recinimos numero
    printf("Numero: "); scanf_s("%i", &numero);

    //hacemos un bucle que sume hasta llegar al numero
    while (i <= numero)
    {
        i++;
        if (i > numero)
        {
            printf("Se debe de sumar del 1 al %i", i);
        }
    }
    return 0;
}


#include <stdio.h>
/*Hacer un programa que lea un numero y 
determine cuando numeros seguidos se deben 
sumar para llegar o  sobrepasar ese numero*/
int main()
{
	int i, multiplicacion, referencia;
	i = 1;
	printf("Numero de la tabla de multiplicar que desea: ");
	scanf_s("%i", &multiplicacion);
	referencia = multiplicacion;
	while (i<=10)
	{
		multiplicacion = referencia * i;
		printf("La multiplicacion de %i x %i = %i\n\n", referencia, i, multiplicacion);
		i++;
	}
	return 0;
}
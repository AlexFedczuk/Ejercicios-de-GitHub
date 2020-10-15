/******************************************************************************

Crear una funci�n que permita ingresar un numero al usuario y lo retorne.
Crear una funci�n que reciba el radio de un c�rculo y retorne su �rea
Utilizar las funciones de los puntos 1 y 2 para hacer un programa que
calcule el �rea de un c�rculo cuyo radio es ingresado por el usuario.
Documentar las funciones al estilo Doxygen

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "miBiblioteca.h"

int main()
{
    int numeroIngresado;
    float areaCirculo;

    numeroIngresado = PedirNumeroEntero("Ingrese (en centimetros 'cm') el radio de un circulo: ");

    areaCirculo = CalcularAreaCirculo(numeroIngresado);

    printf("\nEl circulo con un radio de %d cm, tiene un area de %.2f cm\n", numeroIngresado, areaCirculo);

    return 0;
}

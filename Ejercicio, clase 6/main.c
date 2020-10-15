/******************************************************************************

1-Agregar a la biblioteca utn.h funciones para validar diferentes tipos de
valores: Solo números, ej. 123436679 Solo letras, ej. abBD Alfanumericos,
ej. ab555gT6 Teléfono, ej. 4XXX-XXXX

2-Realizar un programa que pida al usuario el ingreso de un dato y determine
con cuales de los tipos cumple.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "miBiblioteca.h"

int ValidarCadenaNumeros(int vector[]);
int ValidarCadenaCaracteres(int vector[]);

int main()
{
    //int numerosIngresado[5];
    int numerosIngresado[6] = {0, 2, 'a', 4, 9};
    //char numerosIngresado[6] = {'a', 'B', '/', '*', 't'};
    int numero[6];

    //int i;

    //i = 0;

    /*printf("Ingrese numeros!\n");
    for(i = 0; i < 5; i++)
    {
        printf("Ingrese aqui: ");
        fflush(stdin);
        scanf("%d", &numerosIngresado[i]);
    }*/

    //numero = ValidarCadenaNumeros(numerosIngresado);

    for(int i = 0; i < 5; i++)
    {
        numero[i] = ValidarCadenaNumeros(numerosIngresado);
        printf("numero: %d\n", numero[i]);
    }

    MostrarArrayNumerosYIndices(numerosIngresado, 5);

    return 0;
}

int ValidarCadenaNumeros(int vector[])
{
    int i;

    i = 0;

    while(vector[i] != '\0')
    {
        if(vector[i] < '0' || vector[i] > '9')
        {
            return 1;
        }
        i++;
    }

    return 0;
}

int ValidarCadenaCaracteres(int vector[])
{
    int i;

    i = 0;

    while(vector[i] != '\0')
    {
        if((vector[i] != ' ') &&
            (vector[i] < 'a' || vector[i] > 'z') &&
            (vector[i] < 'A' || vector[i] > 'Z'))
        {
            return 0;
        }
        i++;
    }
    return 1;
}

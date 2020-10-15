#include "utn.h"

int getInt()
{
    int numeroIngresado;

    printf("Ingrese un numero entero: ");
    scanf("%d", &numeroIngresado);

    return numeroIngresado;
}

float getFloat()
{
    float numeroIngresado;

    printf("Ingrese un numero con coma: ");
    scanf("%f", &numeroIngresado);

    return numeroIngresado;
}

char getChar()
{
    char caracterIngresado;

    printf("Ingrese un caracter(letra): ");
    scanf("%c", &caracterIngresado);

    return caracterIngresado;
}

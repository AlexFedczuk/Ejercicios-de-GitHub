#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "miBiblioteca.h"

void PedirUnaCadena(char cadena[], int buffer, char mensaje[])
{
    printf(mensaje);
    fflush(stdin);
    gets(cadena);

    while(strlen(cadena) > buffer)
    {
        printf("\nError! No ingrese mas de %d caracteres!\n", buffer);
        printf(mensaje);
        fflush(stdin);
        gets(cadena);
    }
}

void FormalizarApellidoNombreParte1(char apellidoNombre[], char apellido[], char nombre[])
{
    strcpy(apellidoNombre, apellido);
    strcat(apellidoNombre, ", ");
    strcat(apellidoNombre, nombre);
    strlwr(apellidoNombre);
}

void FormalizarApellidoNombreParte2(int buffer, char apellidoNombre[])
{
    int i;

    for(i = 0; i < buffer; i++)
    {
        if(i == 0)
        {
            apellidoNombre[i] = toupper(apellidoNombre[i]);
        }else
        {
            if(apellidoNombre[i] == ' ')
            {
                apellidoNombre[i + 1] = toupper(apellidoNombre[i + 1]);
            }
        }
    }
}

int PedirNumeroEntero(char mensaje[])
{
    int numeroIngresado;

    printf(mensaje);
    scanf("%d", &numeroIngresado);

    return numeroIngresado;
}

int CalcularNumeroMaximo(int vector[], int tam)
{
    int i;
    int numeroMaximo;

    for(i = 0; i < tam; i++)
    {
        if(i == 0 || numeroMaximo < vector[i])
        {
            numeroMaximo = vector[i];
        }
    }

    return numeroMaximo;
}

int CalcularNumeroMinimo(int vector[], int tam)
{
    int i;
    int numeroMinimo;

    for(i = 0; i < tam; i++)
    {
        if(i == 0 || numeroMinimo > vector[i])
        {
            numeroMinimo = vector[i];
        }
    }

    return numeroMinimo;
}

int AcumularNumeros(int vector[], int tam)
{
    int acumulador;

    int i;

    acumulador = 0;

    for(i = 0; i < tam; i++)
    {
        acumulador = acumulador + vector[i];
    }

    return acumulador;
}

float CalcularPromedio(int total, int unidades)
{
    float promedio;

    promedio = (float)total / unidades;

    return promedio;
}

void MostrarArrayNumerosYIndices(int vector[], int tam)
{
    int i;

    printf("\n*Numeros ingresados y sus indices*\n\n");
    for(i = 0; i < tam; i++)
    {
        printf("Numero: %d, indice: [%d]\n", vector[i], i);
    }
}

void ModificarNumeroArray(int vector[], int tam, int numeroSeleccionado)
{
    int i;
    int nuevoValor;

    for(i = 0; i < tam; i++)
    {
        if(vector[i] == numeroSeleccionado)
        {
            printf("\nnumero %d, indice[%d]\n",vector[i], i);
            printf("Ingrese el nuevo valor para remplazar el viejo: ");
            fflush(stdin);
            scanf("%d", &nuevoValor);

            vector[i] = nuevoValor;
            break;
        }
    }
}

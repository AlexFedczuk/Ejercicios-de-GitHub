/******************************************************************************

Solicitar al usuario 5 números, permitir listarlos por pantalla indicando el
máximo, el mínimo y el promedio. Permitir Modificar el valor de cualquiera de
los números cargados indicando el índice del mismo y su nuevo valor.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "miBiblioteca.h"

int MostrarMenuOpciones(int cantidadOpciones);

int main()
{
    int numerosIngresados [5];
    //int numerosIngresados[5] = {1, 2, 3, 4, 5};
    int numeroMaximo;
    int numeroMinimo;
    int acumulador;
    float promedio;
    int opcionElegida;
    int numeroSeleccionado;

    int i;

    printf("Ingrese 5 numeros enteros\n");
    for(i = 0; i < 5; i++)
    {
        numerosIngresados[i] = PedirNumeroEntero("Ingrese aqui: ");
    }

    numeroMaximo = CalcularNumeroMaximo(numerosIngresados, 5);
    numeroMinimo = CalcularNumeroMinimo(numerosIngresados, 5);
    acumulador = AcumularNumeros(numerosIngresados, 5);
    promedio = CalcularPromedio(acumulador, 5);

    printf("\n");
    for(i = 0; i < 5; i++)
    {
        printf("Numero: %d, indice [%d]\n", numerosIngresados[i], i);
    }

    printf("\nEl numero maximo es: %d\n", numeroMaximo);
    printf("El numero minimo es: %d\n", numeroMinimo);
    printf("El promedio es: %.2f\n", promedio);

    opcionElegida = MostrarMenuOpciones(2);

    while(opcionElegida == 1)
    {
        MostrarArrayNumerosYIndices(numerosIngresados, 5);
        printf("Ingrese el numero que quiere modificar: ");
        fflush(stdin);
        scanf("%d", &numeroSeleccionado);

        ModificarNumeroArray(numerosIngresados, 5, numeroSeleccionado);

        system("pause");
        system("cls");

        numeroMaximo = CalcularNumeroMaximo(numerosIngresados, 5);
        numeroMinimo = CalcularNumeroMinimo(numerosIngresados, 5);
        acumulador = AcumularNumeros(numerosIngresados, 5);
        promedio = CalcularPromedio(acumulador, 5);

        printf("\n");
        MostrarArrayNumerosYIndices(numerosIngresados, 5);

        printf("\nEl numero maximo es: %d\n", numeroMaximo);
        printf("El numero minimo es: %d\n", numeroMinimo);
        printf("El promedio es: %.2f\n", promedio);

        opcionElegida = MostrarMenuOpciones(2);
    }

    return 0;
}

int MostrarMenuOpciones(int cantidadOpciones)
{
    int opcionIngresada;

    printf("\n1. Modificar valor\n");
    printf("2. Cerrar programa\n");
    do
    {
        printf("\nIngrese una opcion: ");
        fflush(stdin);
        scanf("%d", &opcionIngresada);
        if(opcionIngresada < 1 || opcionIngresada > cantidadOpciones)
        {
            printf("\nError! Opcion ingresada es invalida!\n");
            printf("\nIngrese una opcion del menu: ");

        }
    }
    while(opcionIngresada < 1 || opcionIngresada > cantidadOpciones);


    return opcionIngresada;
}

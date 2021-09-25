/*
 * pedirUnEntero.c
 *
 *  Created on: 24 sep. 2021
 *      Author: admin
 */
#include <stdio.h>
#include <stdlib.h>

int ingresarUnNumeroEntero(int* pResultado , char* mensaje , char* mensajeError , int minimo , int maximo, int reintentos)
{

    int estado;
    int numero;

    while (reintentos >0)
    {
        printf ("\n %s", mensaje );
        fflush (stdin);
        if (scanf("%d" , &numero ) == 1)
        {
            if(numero<= maximo && numero >= minimo)
              break;
        }

        reintentos--;
        printf ("\n %s", mensajeError );
    }
    if(reintentos==0)
    {
        estado= -1;
    }
    else
    {
      estado = 1;
      *pResultado = numero;
    }
    return estado;
}

int ingresarUnNumeroFlotante(float* pResultado , char* mensaje , char* mensajeError , int reintentos)
{

    int estado;
    float numero;

    while (reintentos >0)
    {
    	printf ("\n %s", mensaje );
        fflush (stdin);
        if (scanf ("%f" , &numero) == 1 )
        {
          break;
        }

        reintentos--;
        printf ("\n %s", mensajeError );
    }
    if(reintentos==0)
    {
        estado= -1;
    }
    else
    {
      estado = 1;
      *pResultado = numero;
    }
    return estado;
}

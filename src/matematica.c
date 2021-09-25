/*
 * matematica.c
 *
 *  Created on: 24 sep. 2021
 *      Author: admin
 */
#include <stdio.h>
#include <stdlib.h>

float matematica_sumarDosNumeros (float numeroA , float numeroB )
{
    float resultadoDeLaSuma;
    resultadoDeLaSuma = numeroA + numeroB;
    return resultadoDeLaSuma;
}
float matematica_restarDosNumeros (float numeroA , float numeroB )
{
    float resultadoDeLaResta;
    resultadoDeLaResta = numeroA - numeroB;
    return resultadoDeLaResta;
}
float matematica_multiplicarDosNumeros (float numeroA , float numeroB)
{
   float resultadoDeLaMultiplicacion;
   resultadoDeLaMultiplicacion = numeroA * numeroB;
   return resultadoDeLaMultiplicacion;
}

int matematica_dividirDosNumeros (float numeroA , float numeroB, float *presultadoDeLaDivision)
{
    int estadoDeLaDivision;

    if(numeroB == 0)
    {
     estadoDeLaDivision = 0;
    }
    else
    {
      * presultadoDeLaDivision = numeroA / numeroB;
      estadoDeLaDivision = 1;
    }
    return estadoDeLaDivision;
}

int matematica_factorial (float numeroA)
{
	numeroA = (int)numeroA;
    int resultado = 1;
    while(numeroA > 1)
    {
        resultado *= numeroA;
        numeroA--;
    }
    return resultado;
}

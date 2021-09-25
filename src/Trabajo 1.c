/*
 ============================================================================
 Name        : Trabajo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "matematica.h"
#include "pedirUnNumero.h"
void imprimirMenuDeOpciones (void);

int main(void){

	setbuf(stdout, NULL);
	int primerOperandoFueIngresado = 0;
	int segundoOperandoFueIngresado = 0;
	int lasOperacionesFueronCalculadas = 0;
	float primerOperando;
	float segundoOperando;
	int opcionElegida = 0;
	int retornoDePedirUnEntero;
	float resultadoDeLaDivision;
	float resultadoSuma;
	float resultadoResta;
	float resultadoMultiplicacion;
	int resultadoDelFactorial;
	int estadoDivision;
	int resultadosFueronMostrados =0;
	int retornoDePedirUnFlotante;


	do{
	  imprimirMenuDeOpciones ();
	  retornoDePedirUnEntero = ingresarUnNumeroEntero(&opcionElegida , "Por favor elija una de las opciones \n" , "Error \n" , 1 , 5 , 3 );

	  if(retornoDePedirUnEntero == 1)
	  {

		  switch (opcionElegida)
		  {
			case 1:
			    if(primerOperandoFueIngresado ==1)
				{
					printf("\nNo es posible, ya fue ingresado." );
				}
				else
				{
					retornoDePedirUnFlotante = ingresarUnNumeroFlotante(&primerOperando, "Ingrese el primero operando", "Error", 2);
			        if (retornoDePedirUnFlotante == 1)
			        {
			        	primerOperandoFueIngresado = 1;
			        }
			        else
			        {
			          printf("\nError, se termina la ejecucion");
			          exit(0);
			        }
				}
			    break;

			case 2:
				if(segundoOperandoFueIngresado ==1)
				{
					printf("\nNo es posible, ya fue ingresado." );
				}
				else
				{
					retornoDePedirUnFlotante = ingresarUnNumeroFlotante(&segundoOperando, "Ingrese el segundo operando", "Error", 2);
					if (retornoDePedirUnFlotante == 1)
					{
						segundoOperandoFueIngresado = 1;
					}
					else
					{
					  printf("\nError, se termina la ejecucion");
					  exit(0);
					}
				}

				break;
			case 3:
				if(primerOperandoFueIngresado == 1 && segundoOperandoFueIngresado == 1 )
				{
					resultadoSuma = matematica_sumarDosNumeros (primerOperando , segundoOperando);
					resultadoResta = matematica_restarDosNumeros (primerOperando , segundoOperando);
					resultadoMultiplicacion = matematica_multiplicarDosNumeros (primerOperando , segundoOperando);
					estadoDivision = matematica_dividirDosNumeros (primerOperando , segundoOperando, &resultadoDeLaDivision);
					resultadoDelFactorial = matematica_factorial(primerOperando);
					lasOperacionesFueronCalculadas = 1;
					printf("\nSe calcularon todas las operaciones ");
				}
				else
				{
					printf("\nNo es posible. Se deben ingresar los dos operandos ");
				}
				break;
			case 4:
				if(lasOperacionesFueronCalculadas == 1)
				{
					printf("\nEl resultado de la suma es: %f", resultadoSuma);
					printf("\nEl resultado de la resta es: %f", resultadoResta);
					printf("\nEl resultado de la multiplicación es: %f", resultadoMultiplicacion);
					printf("\nEl resultado del factorial es: %d", resultadoDelFactorial);
					if(estadoDivision == 1)
					{
					  printf("\nEl resultado de la división es: %f", resultadoDeLaDivision);
					}
					else
					{
					  printf("\nLa division no se pudo resolver, ya que se intento dividir por 0");
					}

					printf("\n¡Gracias por utilizar nuestro programa!");
					resultadosFueronMostrados = 1;
				}
				else
				{
				 printf("\nNo se pueden informar los resultados porque no fueron calculadas las operaciones");
				}
			    break;
			case 5:
				printf("\n¡Gracias por utilizar nuestro programa!");
				break;
	       }
	 }
	 else
	 {
	    printf("\nIngreso el maximo de errores. Se finaliza el programa");
		exit(0);
	 }

 }while(opcionElegida != 5 && resultadosFueronMostrados != 1);
 return EXIT_SUCCESS;
}

void imprimirMenuDeOpciones (void){
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n1- Ingrese el primer operando");
    printf("\n2- Ingrese el segundo operando");
    printf("\n3- Calcular las operaciones");
    printf("\n4- Informar resultados");
    printf("\n5- salir");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
}

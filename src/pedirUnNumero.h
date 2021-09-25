/*
 * pedirUnEntero.h
 *
 *  Created on: 24 sep. 2021
 *      Author: admin
 */

#ifndef PEDIRUNNUMERO_H_
#define PEDIRUNNUMERO_H_
int ingresarUnNumeroEntero(int* pResultado , char* mensaje , char* mensajeError , int minimo , int maximo, int reintentos);
int ingresarUnNumeroFlotante(float* pResultado , char* mensaje , char* mensajeError , int reintentos);
#endif /* PEDIRUNNUMERO_H_ */

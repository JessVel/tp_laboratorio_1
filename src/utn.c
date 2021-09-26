/*
 * utn.c
 *
 *  Created on: Sep 25, 2021
 *      Author: Jesica Velazquez
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

// Funcion para sumar
void funcAdd (int operatorA, int operatorB, int* addResult){
		int result;
		result = operatorA + operatorB;
		*addResult = result;
}

//Funcion para restar
void funcSubstract (int operatorA, int operatorB, int* substractResult){
		int result;
		result = operatorA - operatorB;
		*substractResult = result;
}

//Funcion para multiplicar
void funcMultiply (int operatorA, int operatorB, int* multResult) {
		int result;
		result = operatorA * operatorB;
		*multResult = result;
}

//Funcion para dividir
int funcDevide (int operatorA, int operatorB, float* divideResult) {
		float result;
		int error = TRUE;

		if (operatorB != 0) {
		result = (float)operatorA / operatorB;
		*divideResult = result;
		error = FALSE;
		}
		return error;
}

//Funcion para calcular factorial
int funcFact (int operator, int* factResult){

		int fact = 1;
		int error = TRUE;

		if (operator > 0) {

			for (int i = operator; i > 1; i--) {
			fact = fact * i;
			}
			*factResult = fact;
			error = FALSE;
			}
		return error;
}

//Funcion para obtener numero
void getNum (int* operator){
	int error = FALSE;

	printf("Ingresa un numero: \n");
	error = scanf("%d", operator);

	while (error == TRUE){
		printf("Numero invalido, por favor, ingrese otro numero: \n");
		fflush(stdin);
		error = scanf("%d", operator);
	}
}

//Funcion para obtener float
void getFloat (float* operator){
	int error = FALSE;

	printf("Ingresa un numero: \n");
	error = scanf("%f", operator);

	while (error == TRUE){
		printf("Numero invalido, por favor, ingrese otro numero: \n");
		fflush(stdin);
		error = scanf("%f", operator);
	}
}

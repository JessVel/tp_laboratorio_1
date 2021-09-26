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
int funcAdd (int operatorA, int operatorB){
		int result;
		result = operatorA + operatorB;
		return result;
}

//Funcion para restar
int funcSubstract (int operatorA, int operatorB){
		int result;
		result = operatorA - operatorB;
		return result;
}

//Funcion para multiplicar
int funcMultiply (int operatorA, int operatorB){
		int result;
		result = operatorA * operatorB;
		return result;
}

//Funcion para dividir
int funcDevide (int operatorA, int operatorB, float *pResultFloat){
		float result;
		int error;

		if (operatorB != 0 && pResultFloat != NULL) {
		result = (float)operatorA / operatorB;
		*pResultFloat = result;
		error = 0;

		} else {
			error = -1;
		}
		return error;
}

//Funcion para calcular factorial
int funcFact (int operator, int* pResult){

	int fact = 1;
	int error = TRUE;

	if (operator > 0) {

		for (int i = operator; i > 1; i--) {
		fact = fact * i;
		}
	*pResult = fact;
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

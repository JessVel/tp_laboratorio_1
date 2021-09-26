/*
 * utn.c
 *
 *  Created on: Sep 25, 2021
 *      Author: Jesica Velazquez
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int funcAdd (int operatorA, int operatorB){
		int result;
		result = operatorA + operatorB;
		return result;
}

int funcSubstract (int operatorA, int operatorB){
		int result;
		result = operatorA - operatorB;
		return result;
}

int funcMultiply (int operatorA, int operatorB){
		int result;
		result = operatorA * operatorB;
		return result;
}

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


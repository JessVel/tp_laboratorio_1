/*
 ============================================================================
 Name        : tp_01.c
 Author      : Jesica Velazquez
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void) {

	setbuf(stdout,NULL);

	int numA;
	int numB;
	int option = 6;
	int addResult;
	int substractResult;
	int multResult;
	float divideResult;
	int AfactResult;
	int BfactResult;
	int errorDivide;
	int errorFactA;
	int errorFactB;



	while(option < 6){

		printf("Selecciones una de las siguientes opciones: \n\t 1. Ingresar 1er operando\n\t 2. Ingresar 2do operando\n\t 3.Realizar todas las operaciones (suma, resta, multiplicacion, division y factorial)\n\t 4. Imprimir todas las operaciones\n\t 5. Salir");
		fflush(stdin);
		scanf("%d", &option);


		//Switch para evaluar que opciones hacer dependiendo el caso
		switch (option){
		case 1:
			getNum(&numA);
			break;
		case 2:
			getNum(&numB);
			break;
		case 3:
			funcAdd(numA, numB, &addResult);
			funcSubstract(numA, numB, &substractResult);
			funcMultiply(numA, numB, &multResult);
			errorDivide = funcDevide(numA, numB, &divideResult);
			errorFactA = funcFact(numA, &AfactResult);
			errorFactB = funcFact(numB, &BfactResult);

			break;
		case 4:
			printf("El resultado de la suma es: %d\n", addResult);
			printf("El resultado de la resta es: %d\n", substractResult);
			printf("El resultado de la multiplicación es: %d\n", multResult);

			if (errorDivide == 0) {
				printf("El resultado de la multiplicación es: %f\n", divideResult);
			} else {
				printf("Hubo un error en la division.");
			}

			if (errorFactA == 0) {
				printf( "El resultado es del factorial es: %d\n", AfactResult);
			} else {
				printf("Hubo un error en el factorial.");
			}

			if (errorFactB == 0) {
				printf( "El resultado es del factorial es: %d\n", BfactResult);
			} else {
				printf("Hubo un error en el factorial.");
			}
			break;

		case 5:
			printf("Programa terminado!");
			break;

		default:
			break;
		}
	}
}














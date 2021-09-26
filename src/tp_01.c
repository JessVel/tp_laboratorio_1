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
	int resultInt;
	float resultFloat;
	char operation;
	int run = 1;
	float responseFloat;
	float resultFactA;
	float resultFactB;
	int responseFactA;
	int responseFactB;

	while ( run == 1 ){

		printf("Por favor, ingrese un numero:\n");
		fflush(stdin);
		scanf("%d", &numA);

		if( numA == 0 ){
			printf("No se puede dividir por 0, por favor, ingrese otro numero");
			fflush(stdin);
			scanf("%d", &numA);
		}

		printf("Por favor, ingrese otro un numero:\n");
		fflush(stdin);
		scanf("%d", &numB);

		if( numB == 0 ){
		printf("No se puede dividir por 0, por favor, ingrese otro numero\n");
		fflush(stdin);
		scanf("%d", &numB);
		}

		printf("Por favor, ingrese una operacion: suma (+), resta(-) ,multiplicacion (*) ,division(/), factorial(!):\n");
		fflush(stdin);
		scanf("%c", &operation);


		switch (operation) {
			case '+':
				resultInt = funcAdd(numA, numB);
				printf("El resultado de la suma es: %d\n", resultInt);
				break;

			case '-':
				resultInt = funcSubstract(numA, numB);
				printf("El resultado de la resta es: %d\n", resultInt);
				break;

			case '*':
				resultInt = funcMultiply(numA, numB);
				printf("El resultado de la multiplicación es: %d\n", resultInt);
				break;

			case '/':
				responseFloat = funcDevide(numA, numB, &resultFloat);
				if( responseFloat == 0){
					printf("El resultado es: %f\n", resultFloat);
				} else {
					printf("No es posible dividir por cero");
				}
				break;
			case '!':
				responseFactA = funcFact(numA, &resultFactA);
				if(responseFactA == 0){
					printf("El resultado es del primero numero es: %d\n", resultFactA);
				} else {
					printf("Hubo un error");
				}
				responseFactB = funcFact(numB, &resultFactB);
				if(responseFactB == 0){
					printf("El resultado es del segundo numero es: %d\n", resultFactB);
				} else {
					printf("Hubo un error");
				}
				break;
			default:
				break;
		}

		printf("Quiere seguir? 1 para seguir, 0 para salir:\n");
				fflush(stdin);
				scanf("%d", &run);

		if( run == 0 ){
			printf("Programa terminado!");
		}
	}
}




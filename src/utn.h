/*
 * utn.h
 *
 *  Created on: Sep 25, 2021
 *      Author: Jesica Velazquez
 */

#ifndef UTN_H_
#define UTN_H_

#define TRUE -1
#define FALSE 0

void funcAdd (int operatorA, int operatorB, int* addResult);
void funcSubstract (int operatorA, int operatorB, int* substractResult);
void funcMultiply (int operatorA, int operatorB, int* multResult) ;
int funcDevide (int operatorA, int operatorB, float* divideResult) ;
int funcFact (int operator, int* factResult);
void getNum (int* operator);
void getFloat (float* operator);


#endif /* UTN_H_ */

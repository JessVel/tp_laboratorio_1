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

int funcAdd (int operatorA, int operatorB);
int funcSubstract (int operatorA, int operatorB);
int funcMultiply (int operatorA, int operatorB);
int funcDevide (int operatorA, int operatorB, float *varDirection);
int funcFact (int operatorA, float* pResultFloat);

#endif /* UTN_H_ */

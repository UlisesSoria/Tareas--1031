// =================================================================
//
// File: activity.h
// Author: Ulises Soria Baeza A01704152
// Date:23/08/2022
//
// =================================================================
#ifndef ACTIVITY_H
#define ACTIVITY_H

// =================================================================
// sumaIterativa. Calculate the sum from 1 to n with an iterative
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(n) debido a que el ciclo for determina que el ciclo se repite n veces, por tanto n x O(1) = O(n)
// =================================================================
unsigned int sumaIterativa(unsigned int n) {
	int j = 0;
	if (n == 1)
		return 1;
	for(int i = 1; i <= n; i++){
		j = j + i;
	};
	return j;
}

// =================================================================
// sumaRecursiva. Calculate the sum from 1 to n with an recursive
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(n) debido a que el ciclo for determina que el ciclo se repite n veces, por tanto n x O(1) = O(n)
// =================================================================
unsigned int sumaRecursiva(unsigned int n) {
	if (n == 1)
		return 1;
	return n + sumaRecursiva(n-1);
}

// =================================================================
// sumaDirecta. Calculate the sum from 1 to n with a mathematical
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(1) pues la instrucción es lineal, unicamente es una suma
// =================================================================
unsigned int sumaDirecta(unsigned int n) {
	int i = 0;
	if (n == 1)
		return 1;
	i = ( n * (n + 1) ) / 2;
	return i;
}

#endif /* ACTIVITY_H */

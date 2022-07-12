#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <fenv.h>

int add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}
int sub(int a, int b)
{
	int diff;

	diff = a - b;
	return (diff);
}
int mul(int a, int b)
{
	int prod;

	prod = a * b;
	return (prod);
}
int div(int a, int b)
{
	int quotient;

	quotient = lround(a / b);
	return (quotient);
}
int mod(int a, int b)
{
	int modulus;

	modulus = a % b;
	return (modulus);
}

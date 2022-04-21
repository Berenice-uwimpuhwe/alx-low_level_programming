#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: takes in an integer
 * @b: takes in an integer
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}

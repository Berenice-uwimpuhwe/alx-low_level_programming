#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: takes in a character
 * Return: 1 if uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	for (c = 'a'; c <= 'z'; c++)
		return (0);

	for (c = 'A'; c <= 'Z'; c++)
		return (1);
}

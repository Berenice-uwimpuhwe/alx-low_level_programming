#include "main.h"
/**
 * _islower - checks for lowercase characters
 *
 * Return: 0 for uppercase, 1 for lowercase
 */
int _islower(int c)
{
	if (c >='a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

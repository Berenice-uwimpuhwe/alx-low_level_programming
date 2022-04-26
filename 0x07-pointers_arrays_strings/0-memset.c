#include "main.h"

/**
 * *_memset - fills memory with constant byte
 * @s: pointer
 * @b: byte
 * @n: number of bytes to fill
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i > n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

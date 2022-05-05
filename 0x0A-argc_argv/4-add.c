#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - checks if string is a number
 * @s: string
 * Return: On success 1
 */

int is_number(char *s)
{
	int i, check, a;

	i = 0, a = 0, check = 1;
	if (*s == '-')
		i++;
	for (; *(s + i) != 0; ++i)
	{
		a = isxdigit(*(s + i));
		if (a == 0)
		{
			check = 0;
			break;
		}
	}
	return (check);
}
/**
 * main - Entry point
 * @argc: counts paramteters entering to main
 * @argv: pointer of array of pointer containg strings entering main
 * Return : Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i, n , a;

	a = 0 , n = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (is_number()argv[i])
				n += atoi(argv[i]);
			else
				a = 1;
		}
	}
	if (a == 0)
		printf("%i\n", n);
	else
		printf("%s\n", "Error");
	return (a);
}

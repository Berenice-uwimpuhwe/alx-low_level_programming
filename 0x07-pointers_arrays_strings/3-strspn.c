#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: characcters that prefix substring must include
 * return: length of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, a_len = 0, len = 0;

	while (accept[a_len] != '\0')
		a_len++;
	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < a_len; j++)
			if (s[i] == accept[j])
				len++, j = a_len;
			else
				if (j == a_len - 1)
					goto exit;
exit : return (len);
}
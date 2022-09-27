#include "main.h"

/**
 * _strpbrk - searches a string
 * @s: check string
 * @accept: string to check against 
 *
 * Return: byte to matches or null if not match
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}

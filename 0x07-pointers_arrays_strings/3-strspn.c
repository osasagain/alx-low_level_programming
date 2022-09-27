#include "main.h"

/**
 * _strspn - gets lengthof a prefix substring
 * @s: check string
 * @accept: number of bytes of s
 *
 * Return: number of bytes of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}

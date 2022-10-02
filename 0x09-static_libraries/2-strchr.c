#include "main.h"

/**
 * _srtchar - locate character in a string
 * @s: check string
 * @c: check character
 * Return: pointer spot in s and c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s +i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s+i);
	return (0);
}

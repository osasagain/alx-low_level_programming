#include "main.h"

/**
 * string_toupper - change lowercase to uppercase
 * @n: pointer
 * Return: successful
 */

char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[1] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
	}
	return (n);
}

#include "main.h"

/**
 * _strlen - function to get the length of string
 * @s: string
 *
 * Return: returns length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length;
	return(length);
}


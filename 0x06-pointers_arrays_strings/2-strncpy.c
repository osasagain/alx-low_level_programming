#include "main.h"

/**
 * _strncpy - function that copy string
 * @dest: storing the string copy
 * @src: the source string
 * @n: number of string copy
 *
 * Return: successful
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0', i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

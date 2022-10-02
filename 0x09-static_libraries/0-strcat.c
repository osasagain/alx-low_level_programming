#include "main.h"

/**
 * _strcast - concatenates the string pointed to by  src to dest
 * @dest: Appended string
 * @src: concatenated string
 *
 * Return: return successful
 */

char *_strcat(char *dest, char *src)
{
	int index = 0,  dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}

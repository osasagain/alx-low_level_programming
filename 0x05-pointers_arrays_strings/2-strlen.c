#include "main.h"

/**
 * _strlen -> function to get the length of string
 * @s: string
 * Return: returns length of the string
 */
int _strlen(char *s)
{
	int len;

	for(; *s != '\0'; s++)
	{
		len += 1;
	}
	return (len);
}

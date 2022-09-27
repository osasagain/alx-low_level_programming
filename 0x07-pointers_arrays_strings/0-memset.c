#include "main.h"

/**
 * main - entry pint 
 * _memset - file a program with a constant byte
 * @s: the memory block
 * @b: char to be used
 * @n: number of byte
 *
 * Return: the pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}

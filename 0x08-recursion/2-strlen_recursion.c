#include "main.h"

/**
 * _strlen_recursion - function that calculate the length of a string
 * @s: string to be used
 *
 * Return: length of string
 */

int_strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum ++;
		sum += _strlen_recursion(s + 1);
	}return (sum);
}

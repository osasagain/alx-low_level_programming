#include "main.h"

/**
 * main - Entry point 
 * Desription: Check if character is uppercase or not 
 * Return: Always 0 ( success)
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}


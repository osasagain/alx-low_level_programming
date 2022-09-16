#include "main.h"

/**
 * main - entry point
 *
 * Decription: Print number 0 to 9
 *
 * Return: 0
 */

void print_most_numbers(void)
{

	int n;

	for (n = 48; n < 58; n++)
	{
		if ((n == 50) || (n == 52))
		{
			continue;
		}
		putchar(n);
	}
	putchar(10);
}

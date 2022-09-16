#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Desription: Print a stright line parameter
 *
 * Return: 0
 */

void print_lin(int n)
{
	while (n -- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}

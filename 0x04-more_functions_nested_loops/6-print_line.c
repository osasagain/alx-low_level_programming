#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: print a straight line
 *
 * Return: 0
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}

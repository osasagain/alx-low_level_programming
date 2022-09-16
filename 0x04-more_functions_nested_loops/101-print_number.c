#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * 
 * Description: print number
 *
 * Return: 0
 */

void print_number(int n)
{
	unsigned int num = n;
		if (n < 0)
		{
			putchar('_');
			num = -num;
		}
	if (num > 0)
	{
		print_number(num / 10);
	}
	putchar(num % 10 + '0');
}

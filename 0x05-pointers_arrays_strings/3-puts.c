#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 * @str: string
 *
 * Desription: prints a string
 * on success: return no error
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i)!= '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}

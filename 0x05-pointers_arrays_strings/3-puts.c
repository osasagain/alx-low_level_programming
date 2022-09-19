#include "main.h"

/**
 * _puts - prints a string
 * @str: print string
 *
 * Desription: print a string
 * on success: return no error
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * puts - prints a string
 * @str: print string
 *
 * Desription: print a string
 * on success: return no error
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}

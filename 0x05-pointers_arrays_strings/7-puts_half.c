#include <stdio.h>
#include "main.h"

/**
 * puts_half - print a string
 * @str: to print haalf string
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int i, n;

	for (i = 0; str[1] != '\0'; i++)

		if(1 % 2 == 0) {
			for (n = i / 2; str[n] != '\0'; n++)
				putchar(str[n]);
		}else{
			for(n =((i -1) / 2) + 1; str[n] != '\0'; n++)
				putchar(str[n]);
		}
	putchar('\n');
}

#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the charater c to stdout
 * @c: character to be printed
 *
 * Return: success 1
 * on error, -1 is returneed, and error is set to appropriate
 * */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

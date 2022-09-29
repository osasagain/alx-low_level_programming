#include "main.h"

/**
 * _pow_recursion - return the value of the x raised to the power of y
 * @x: number of x
 * @y: number of y
 *
 * Return: x ^ y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

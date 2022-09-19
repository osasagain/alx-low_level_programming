#include "main.h"

/**
 * swap_int - swap two interger values
 * @a: first integer
 * @b: second integre
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

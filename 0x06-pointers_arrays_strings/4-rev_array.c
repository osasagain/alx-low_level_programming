#include "main.h"

/**
 * reverse_array(int +a int n)
 * @a: array
 * @n: number of element in array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, tm;

	for (i = 0; i < n; i++)
	{
		n--;
		tm = a[i];
		a[i] = a[n];
		a[n] = tm;
	}
}

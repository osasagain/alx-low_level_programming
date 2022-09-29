#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_prime_number - return 1 if n is prime number
 * @n: the number
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

/**
 * is_prime - return 1 if n is prime number
 * @n: the number
 * @start: number to start check
 *
 * Return: return 1 if prime, otherwise 0
 */

int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}

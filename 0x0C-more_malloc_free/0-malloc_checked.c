#include <stdlib.h>

/**
 * malloc_checked - alloctaes memory using malloc
 * @b: size of memory to be allocated
 *
 * Return: pointer to alloacte memory
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}

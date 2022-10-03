#include <stdio.h>

/**
 * main - program that print the number of argument passed into it
 *
 * @args: the count argument
 * @argv: the vector argument
 *
 * Return: 0
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}

#include <stdio.h>

/**
 * main - write a program that prints all arguments it receives
 *
 * @argc: argument of number
 * @argv: argument of array
 *
 * Return: always return successful
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}

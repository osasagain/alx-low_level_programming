#include <stdio.h>
#include <stdlib.h>

/**
 * main - write a program that multiplies two numbers
 * @argc: the count argument
 * @argv: the vector argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int index, multiplication;

	multiplication = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (index = 1; index < argc; index++)
	{
		multiplication = multiplication * atoi(argv[index]);
	}
	printf("%d\n", multiplication);
	return (0);
}

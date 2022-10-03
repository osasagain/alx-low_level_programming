#include <stdio.h>

/**
 * main - Write a program that prints its name, followed by a new line.
 *
 * @argc: the count argument
 * @argv: the vector argument
 *
 * Description: a function  to rename the program, to print the new name
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that print minimum number of coins to chnage for money
 * @args: parameter entry
 * @argv: number of arguments
 *
 * Return: 0
 */
int main(int args, char *argv[])
{
	int c, coins = 0;

	if (args != 2)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]);
	if (c < 0)
	{
		printf("0\n");
		return (0);
	}
	for (; c >= 0;)
	{
		if (c >= 25)
			c -= 25;
		else if (c >= 10)
			c -= 10;
		else if (c >= 5)
			c -= 5;
		else if (c >= 1)
			c -= 1;
		else
			break;
		coins += 1;
	}
	printf("%d\n", coins);
	return (0);
}

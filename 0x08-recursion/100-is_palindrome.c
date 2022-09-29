#include "main.h"

/**
 * is_palindrome - returns 1 if string is palindrome else 0
 * @s: the string
 *
 * Return: empty string or 0  
 */

int is_palindrome(char *s)
{
	int flag = 1;
	check(s, 0, _strlen_recursion(s) - 1, &flag);
	return (flag);
}

/**
 * check - check if the string is a palindrome
 * @s: the string
 * @start: start number
 * @end: end number
 *
 * Return: void
 */

void check(char *s, int start, int end, int *flag)
{
	if (start <= end)
	{
		if (s[start] == s[end])
			*flag *= 1;
		else
			*flag *= 0;
		check(s, start + 1, end - 1, flag);
	}
}

/**
 * _strlen_recursion - calculate the length of the string
 * @s: the string
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum ++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}

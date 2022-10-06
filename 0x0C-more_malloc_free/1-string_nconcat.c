#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen -  calculate and return string length
 * @s: string length
 *
 * Return: success
 */
int _srtlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)

		return (i);
}
/**
 * string_nconcat - concatenate s1 and n byte of s2
 * @s1: string 1
 * @s2: string 2
 * @n: n byte to concatenate 
 * Return: pointer to concatenate string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int num, len, i, j;

	num = n;

	if (s1 == NULL) 
		S1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0 )
		return (NULL);
	if (num >= _strlen(s2))
		num = _strlen(s2);

	len = _strlen(s1) + num + 1;

	ptr = malloc(sizeof(*ptr) * len);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	 for (j = 0; j < num; j++)
		 ptr[i + j] = s2[j];

	 return (ptr);
}
			

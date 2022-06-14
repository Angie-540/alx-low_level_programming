#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: string to find length of
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	in i = 0;

	while (*(s + i))
		i++;
	return (i);
}

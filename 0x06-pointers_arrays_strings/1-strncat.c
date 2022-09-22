#include "main.h"

/**
 * _strncat -  concatenates two strings.
 *@dest: first string
 *@src: second string to be added
 *@n: number of bytes from src
 *
 *Return: a pointer to string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;


	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';

	return (dest);
}

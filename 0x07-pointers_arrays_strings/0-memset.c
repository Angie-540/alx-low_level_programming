#include "main.h"

/**
 * *_memset - fills the first n bytes with cons byte b
 *@n : number of bytes to fill
 *@s : pointer to memory area
 *@b : constant byte to replace with
 *
 *Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

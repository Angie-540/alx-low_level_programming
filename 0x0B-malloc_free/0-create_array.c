#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates an array and initializes it with a specific char
 *@size: number of characters in the array
 *@c: character to initialise array with
 *
 *Return: NULL if size is 0,pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)

{
	char *p;
	unsigned int i;

	i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);
	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}

#include <stdlib.h>
#include "main.h"


/**
 *string_nconcat - concatenates two strings
 *@s1: destination string
 *@s2: source string
 *@n: no of bytes from source string to be concatenated
 *
 *Return: pointer to newly allocated space containing s1, Null if fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *s;
	unsigned int i, j, k, length, length2;

	i = 0;
	j = 0;
	k = 0;
	length = 0;
	length2 = 0;

	while (s1 && s1[length])
		length++;

	while (s2 && s2[length2])
		length2++;

	if (n < length2)
		s = malloc(sizeof(char) * (length + 1));

	else
		s = malloc(sizeof(char) * (length + length2 + 1));

	if (!s)
		return (NULL);

	while (i < length)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < length && i < (length + n))
		s[i++] = s2[j++];

	while (n < length2 && i < (length + length2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}

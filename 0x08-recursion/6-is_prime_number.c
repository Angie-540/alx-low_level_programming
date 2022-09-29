#include "main.h"

/**
 * is_prime_number - returns the 1 if n is prime
 * @n: number to be checked
 *
 * Return: result
 */

int is_prime_number(int n)
{
	int tmp = 1;

	if (tmp >= n)
		return (0);
	if (n % tmp == 0)
		return (1);

	return (is_prime_number(n % (tmp + 1)));
}

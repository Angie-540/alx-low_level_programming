#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes
 *function given as parameter on each element of array
 * @size: size of the array
 * @action: pinter to function to be used
 * @array: array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

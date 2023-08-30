#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - search integer value.
 * returns the index of the first element for which the cmp,
 * function does not return 0
 *
 * @array: array pointer
 * @size: array size
 * @cmp: pointer to function to be used to compare values
 *
 * Return: 0 if success, -1 if fails or size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; ++i)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

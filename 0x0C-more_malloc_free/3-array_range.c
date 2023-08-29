#include <stdlib.h>
#include "main.h"
/**
 * arra_range - creates an array of integers
 * @min: minimum range of stored values
 * @max: maximum range of stroed values
 *
 * Return: pointer to new array, or NULL if it fails
 */
int *array_range(int min, int max)
{
	int i, size;
	int *ptr;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}

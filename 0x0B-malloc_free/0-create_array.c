#include "main.h"
#include <stdlib>

/**
 * create_array - it creates an array of chars.
 * @size: size of array
 * @c: initial value
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		array = (char *)malloc(sizeof(char) * size);
		if (array == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
				array[i] = c;
		}
	}
	return (array);
}

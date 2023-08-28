#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * uses malloc
 * @s1: pointer to first string.
 * @s2: pointer to second string.
 *
 * Return:pointer should point to a newly allocated space in memory
 * which contains the content of s1 followed by contents of s2.
 * NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, size1, size2, size;
	char *result;

	size1 = size2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			size1++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			size2++;
	}

	size = size1 + size2;
	result = (char *)malloc(sizeof(char) * (size + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		result[i] = s1[i];

	for (j = 0; j < size2; j++, i++)
		result[i] = s2[j];
	result[size] = '\0';

	return (result);
}


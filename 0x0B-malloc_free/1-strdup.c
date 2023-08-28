#include "main.h"
#include <stdlib.h>
/**
 * _strdp - create a pointer to a new string
 * that is a duplicate of the string str.
 * memory of new string obtained with malloc.
 * @str: pointer to a string
 *
 * Return: pointer to a duplicated string,
 * returns NULL if not enough memory was available.
 */

char *_strdup(char *str)
{
	char *newstr;
	unsigned int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
		len++;

	newstr = (char *)malloc((sizeof(char) * len) + 1);
	if (newstr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len; i++)
			newstr[i] = str[i];
		newstr[len] =  '\0';
	}

	return (newstr);
}

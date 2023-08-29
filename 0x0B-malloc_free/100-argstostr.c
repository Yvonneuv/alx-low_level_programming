#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argument count
 * @av: argument vector
 * Return -  pointer to a new string, or NULL if fails.
 */
char *argstostr(int ac, char **av)
{
	char *str, *temp;
	int i, j, k, len = 0;

	if  (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		temp = av[i];
		len = 0;
		while (temp[j++])
			len++;
		len++;
	}

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac && j < len; i++)
	{
		temp = av[i];
		k = 0;

		while (temp[k])
		{
			str[j] = temp[k];
			j++;
			k++;
		}
		str[j++] = '\n';
	}
	str[j] = '\0';

	return (str);
}



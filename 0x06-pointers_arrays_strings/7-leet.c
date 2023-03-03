#include "main.h"
/**
 * _leet - encodes a string into 1337
 * Letters a and A should be replaced by 4
 * e and E should be replaced by 3
 * o and O should be replaced by 0
 * t and T should be replaced by 7
 * l and L should be replaced by 1
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] == s1[j];
			}
		}
	}
	return (n);
}

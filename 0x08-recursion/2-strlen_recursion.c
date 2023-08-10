#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: prints the string
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	int slen = 0;

	if (*s != '\0')
	{
		slen = _strlen_recursion(s + 1);
		++slen;
	}
	return (slen);
}

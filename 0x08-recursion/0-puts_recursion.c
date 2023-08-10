#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new line.
 * @s: prints a string
 * Return: 0 if successful
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

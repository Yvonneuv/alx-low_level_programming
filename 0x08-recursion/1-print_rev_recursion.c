#include "main.h"
/**
 * _print_rev_recursion -prints a string in reverse.
 * @s: prints a string
 * Return: 0 if successful.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

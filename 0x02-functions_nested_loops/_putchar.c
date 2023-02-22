#include "main.h"
#include <unistd.h>

/**
 * main -  writes character c to stdout
 * @c: the character to print
 *
 * Return: 1 success
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}

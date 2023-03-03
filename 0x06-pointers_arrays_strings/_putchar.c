#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the c characterto stdout
 * @c: The character to print
 *
 * Return: 0 success
 * On error, -1 is returned, and errno is set appropriately
 */

int_putchar(char c)
{
	return (write(1, &c, 1));
}

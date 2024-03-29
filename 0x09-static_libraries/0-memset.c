#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 *
 * @s: pointer to memory area
 * @b: constant byte
 * @n: byte size
 *
 * Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	return memset(s, b, n);
}

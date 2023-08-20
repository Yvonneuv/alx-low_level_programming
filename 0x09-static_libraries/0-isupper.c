#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _isupper - check uppercase alphabets
 * @c: character
 * Return: 1 if c is uppercase otherwise 0.
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

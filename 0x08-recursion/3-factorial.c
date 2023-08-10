#include "main.h"
/**
 * factorial - calculates a factorial.
 * @n: integer
 * Return: factorial value of a number.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (1);

	else
		return (n * factorial(n - 1));
}

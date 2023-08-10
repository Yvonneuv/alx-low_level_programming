#include "main.h"
/**
 * _sqrt_recursion - finds the square root of a number.
 * @n: integer power
 * Return: the squareroot value
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - finding natural square.
 * @n: integer number
 * @i: iterate untl it is < n
 * Return: square root
 */
int sqrt(int n, int i)
{
	if ((i * i) > n)
		return (-1);
		
	 if ((i * i) == n)
		 return (i);
	 if (n < 0)
		 return (-1);
	 return (_sqrt(n, ++i));
}

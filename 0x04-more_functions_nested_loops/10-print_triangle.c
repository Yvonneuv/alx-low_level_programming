#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @n: size of the triangle
 */
void print_triangle(int n)
{
	int i, tri;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (tri = n - i; tri > 0; tri--)
				_putchar(' ');

			for (tri = 0; tri < n; tri++)
				_putchar('0');

			if (i == n)
				continue;

			_putchar('\n');
		}
	}
}

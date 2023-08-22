#include "main.h"
#include <stdio.h>
/**
 * main - prints name.
 * @argc: number of arguments entered.
 * @argv: argument vector, holds string value of argument entered.
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}

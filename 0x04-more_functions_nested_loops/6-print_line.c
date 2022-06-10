#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: input number
 *
 * Return: zero
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
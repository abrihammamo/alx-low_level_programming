#include <stdio.h>

/**
 * main - print all possible different combinations of two digits.
 *
 * Return: zero
 */
int main(void)
{
	/**
	 * d1: is digit one
	 * d2: is digit two
	 */

	int d1;
	int d2;

	for (d1 = '0'; d1 <= '9'; d1++)
	{
		for (d2 = d1 + 1; d2 <= '9'; d2++)
		{
			if (d1 != d2)
			{
				putchar(d1);
				putchar(d2);
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

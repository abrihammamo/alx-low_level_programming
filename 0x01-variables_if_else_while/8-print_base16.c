#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in
 * lowercase, followed by a new line.
 *
 * Return: zero
 */
int main(void)
{
	char low;
	int d;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}

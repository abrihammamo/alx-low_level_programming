#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: zero
 */
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
	putchar('\n');

	return (0);
}

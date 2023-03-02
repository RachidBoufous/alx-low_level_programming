#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: void
 * author: @RachidBoufous
 */

void print_number(int n)
{
	unsigned int i, j, k, l, m;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	else
	{
		i = n;
	}
	j = i;
	k = 1;
	while (j > 9)
	{
		j /= 10;
		k *= 10;
	}
	for (; k >= 1; k /= 10)
	{
		l = i / k;
		m = l % 10;
		_putchar(m + '0');
	}
}

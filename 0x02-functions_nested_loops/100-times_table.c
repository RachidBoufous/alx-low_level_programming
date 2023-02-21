#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number to print the times table of
 * description: if n is greater than 15 or less than 0,
 * the function does nothing
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, prod;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; ++j)
		{
			_putchar(',');
			_putchar(' ');

			prod = i * j;

			if (prod <= 9)
				_putchar(' ');
			if (prod <= 99)
				_putchar(' ');

			if (prod >= 100)
			{
				_putchar((prod / 100) + 48);
				_putchar((prod / 10) % 10 + 48);
			}
			else if (prod <= 99 && prod >= 10)
				_putchar((prod / 10) + 48);
			_putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}
}

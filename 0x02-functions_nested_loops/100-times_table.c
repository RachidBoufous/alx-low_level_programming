#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number to print the times table of
 * description: if n is greater than 15 or less than 0, the function does nothing
 * Return: void
 */

void print_times_table(int n)
{
	int i, j;
	if (n > 15 || n < 0)
		return;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i * j < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(i * j + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
			}
			if (j != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}


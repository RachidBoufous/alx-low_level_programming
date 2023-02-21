#include "main.h"


void print_times_table(int n)
{
	int i, j;

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
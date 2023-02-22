#include "main.h"

/**
 * positive_or_negative - prints if integer is positive or negative
 * @i: integer to be tested
 * description: prints if integer is positive or negative
 * Return: 0
 */

void positive_or_negative(int i)
{
		if (i > 0)
		{
			printf("%d is positive  ", i);
		}
		else if (i < 0)
		{
			printf("%d is negative  ", i);
		}
		else
		{
			printf("%d is zero  ", i);
		}
}

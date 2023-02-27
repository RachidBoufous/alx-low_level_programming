#include "main.h"

/**
 * puts2 - prints every other character of a string
 * description: prints every other character of a string
 * @str: pointer to a string
 * Return: void
 * author: @RachidBoufous
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}


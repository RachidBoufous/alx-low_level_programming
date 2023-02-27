#include "main.h"

/**
 * print_rev - print in reverse
 * description: print a string in reverse
 * @s: pointer to a string
 * Return: void
 * author: @RachidBoufous
 */

void print_rev(char *s)
{
	int i = 0;
	int strlen = 0;

	while (s[i] != '\0')
	{
		strlen++;
		i++;
	}

	i = 0;

	for (i = strlen-1 ; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

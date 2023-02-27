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

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}

#include "main.h"

/**
 * _puts - prints a string to stdout
 * description: prints a string to stdout
 * @str: pointer to a string
 * Return: void
 * author: @RachidBoufous
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

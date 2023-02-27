#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to print
 * description: prints half of a string if odd, print (length - 1) / 2
 * Return: void
 */

void puts_half(char *str)
{
	int i, str_len;

	for (str_len = 0; str[str_len] != '\0'; str_len++)
		;

	if (str_len % 2 == 0)
	{
		for (i = str_len / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = ((str_len - 1) / 2) + 1 ;  str[i] != '\0'; i++)
			_putchar(str[i]);
	}
}

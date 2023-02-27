#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to print
 * description: prints half of a string if odd, print (length - 1) / 2
 * Return: void
 * author: @RachidBoufous
 */

void puts_half(char *str)
{
	int i, str_len;
	int startNum;

	while (str[i] != '\0')
	{
		str_len++;
		i++;
	}


	if (str_len % 2 == 0)
	{
		startNum = str_len / 2;
	}
	else
	{
		startNum = (str_len - 1) / 2;
	}

	for (i = startNum; i < str_len; i++)
	{
		_putchar(str[i]);
	}
}

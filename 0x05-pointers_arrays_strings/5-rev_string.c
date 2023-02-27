#include "main.h"

/**
 * rev_string - reverses a string
 * description: reverses a string
 * @s: pointer to a string
 * Return: void
 * author: @RachidBoufous
 */

void rev_string(char *s)
{

	int i = 0;
	int strlen = 0;

	while (s[i] != '\0')
	{
		strlen++;
		i++;
	}

	i = 0;

	for (i = strlen - 1 ; i >= 0; i--)
	{
		_putchar(s[i]);
	}

}

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

	int j = 0;

	for (j = strlen - 1 ; j >= 0; j--)
	{
		_putchar(s[j]);
	}
}

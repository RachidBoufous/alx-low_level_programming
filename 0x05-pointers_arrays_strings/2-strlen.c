#include "main.h"

/**
 * _strlen - returns the length of a string
 * description: returns the length of a string
 * @s: pointer to a string
 * Return: @i int length of string
 * author: @RachidBoufous
 */


int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

#include "main.h"

/**
 * _strcmp - compares two strings
 * description: compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if strings are equal, otherwise the difference between the first
 * different characters
 * author: @RachidBoufous
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}

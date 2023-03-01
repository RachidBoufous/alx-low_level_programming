#include "main.h"

/**
 * leet - encodes a string into 1337
 * description: encodes a string into 1337
 * @str: string to be encoded
 * Return: pointer to the resulting string str
 * author: @RachidBoufous
 */

char *leet(char *str)
{
	int i, j;
	char *s = "aAeEoOtTlL";
	char *n = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (str[i] == s[j])
			{
				str[i] = n[j];
			}
		}
	}
	return (str);
}

#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @c: string to be encoded
 * Return: encoded string
 * author: @RachidBoufous
 */

char *rot13(char *c)
{
	int i = 0;
	while (c[i] != '\0')
	{
		if ((c[i] >= 'a' && c[i] <= 'm') || (c[i] >= 'A' && c[i] <= 'M'))
			c[i] += 13;
		else if ((c[i] >= 'n' && c[i] <= 'z') || (c[i] >= 'N' && c[i] <= 'Z'))
			c[i] -= 13;
		i++;
	}
	return (c);
}

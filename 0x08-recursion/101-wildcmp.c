#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if the strings can be
 * considered identical, otherwise return 0
 * @s1: first string
 * @s2: second string
 * Description: Compares two strings and returns 1 if the strings can be
 * considered identical, otherwise return 0.
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		if (*(s2 + 1) == '\0')
			return (1);
		if (*(s2 + 1) == *s1)
			return (wildcmp(s1, s2 + 1));
		if (*(s2 + 1) != *s1)
			return (wildcmp(s1 + 1, s2));
	}
	return (0);
}

#include "main.h"

/**
 * _strstr - locates a substring
 * description: finds the first occurrence of the substring needle
 * in the string haystack
 * The terminating null bytes (\0) are not compared
 * @haystack: pointer to string
 * @needle: pointer to substring
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0, k = i; needle[j] != '\0' && haystack[k] == needle[j]; j++, k++)
			;
		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	return ('\0');
}

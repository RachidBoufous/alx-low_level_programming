#include "main.h"

int actual_is_palindrome(char *s, int len);

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string to be checked
 *
 * Return: 1 if s is a palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
		return (1);
	return (actual_is_palindrome(s, len));
}

/**
 * actual_is_palindrome - recurses to check if a string is a palindrome
 * @s: string to be checked
 * @len: length of string
 * Description: Checks if a string is a palindrome.
 * Return: 1 if s is a palindrome, otherwise 0
 */

int actual_is_palindrome(char *s, int len)
{
	if (*s != *(s + len - 1))
		return (0);
	if (len <= 3)
		return (1);
	return (actual_is_palindrome(s + 1, len - 2));
}

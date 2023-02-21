#include "main.h"
/**
* _isalpha - checks if character
* @c: character to be checked
* description: checks if character or not by comparing ascii values
* Return:  1 if character, 0 if not
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	return (0);
}



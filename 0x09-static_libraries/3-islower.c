#include "main.h"
/**
* _islower - checks if character is lowercase
* @c: character to be checked
* description: checks if character is lowercase by comparing ascii values
* Return:  1 if lower, 0 if not
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	return (0);
}



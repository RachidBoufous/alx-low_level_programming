#include "main.h"

/**
 * rev_string - reverses a string
 * description: reverses a string
 * @s: pointer to a string
 * Return: void
 * author: @RachidBoufous
 */

void rev_string(char *s){

	int i = 0;
	int strlen = 0;
	char temp;

	while (s[i] != '\0')
	{
		strlen++;
		i++;
	}

	i = 0;

	for (i = 0;  i < strlen / 2; i++)
	{
		temp = s[i];
		s[i] = s[strlen - i - 1];
		s[strlen - i - 1] = temp;
	}
	return (s);
}

#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination string
 * @src: source string
 * description: copies the string pointed to by src
 * Return: pointer to dest
 * author: @RachidBoufous
 */

char *_strcpy(char *dest, char *src)
{
	int i, strlen;

	for (strlen = 0; src[strlen] != '\0'; strlen++)
		;

	for (i = 0; i <= strlen; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}

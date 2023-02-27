#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 * description: generates random valid passwords for the program 101-crackme
 * Return: 0
 * author: @RachidBoufous
 */

int main(void)
{
	srand((unsigned int)(time(NULL)));

	int index;
	index = 0;
	char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789/,.-+=~`<>:";
	for(index = 0; index < 12; index++)
		printf("%c", characters[rand() % (sizeof characters - 1)]);
}

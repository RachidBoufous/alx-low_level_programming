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
	srand(time(0));

    printf("%d", rand());

	return 0;
}


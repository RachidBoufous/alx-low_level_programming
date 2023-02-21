#include "main.h"

/**
* print_alphabet - Prints the alphabet in lowercase
* description: prints the alphabet in lowercase
* Return: no return.
*/



void print_alphabet(void)
{
char character;
for (character = 'a'; character <= 'z'; character++)
{
_putchar(character);
}
_putchar('\n');
}

#include "main.h"
/**
* main - entry point
* description: prints _putchar
* Return: Always 0.
*/
int main(void)
{
char name[] = "_putchar";
int i = 0;
for (i = 0; i < 8; i++)
{
_putchar(name[i]);
}
_putchar('\n');
return (0);

}

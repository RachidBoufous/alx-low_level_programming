#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * description: swaps the values of two integers
 * @a: pointer to an int
 * @b: pointer to an int
 * return: void
 * author: @RachidBoufous
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

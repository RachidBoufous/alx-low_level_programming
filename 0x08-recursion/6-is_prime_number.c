#include "main.h"

int actual_is_prime_number(int n, int i);

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: number to be checked
 *
 * Return: 1 if n is a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_is_prime_number(n, 2));
}

/**
 * actual_is_prime_number - recurses to check if a number is prime
 * @n: number to be checked
 * @i: iterator
 * Description: Checks if a number is divisible by any number
 * other than 1 and itself.
 * Return: 1 if n is a prime number, otherwise 0
 */

int actual_is_prime_number(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (actual_is_prime_number(n, i + 1));
}

#include <stdio.h>
#include <math.h>

/**
 * is_prime - checks if a number is prime
 * @n: number to check
 * description: checks if a number is prime
 * Return: 1 if prime, 0 if not
*/

int is_prime(int n)
{

	if (n <= 1)
	{
		return (0);
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - finds the largest prime factor of 612852475143
 * description: finds the largest prime factor of 612852475143
 * Return: 0
*/

int main(void)
{
	int n = 612852475143;
	int largest_prime = 2;

	for (int i = 1; i < n; i++)
	{
		if (n % i == 0 && is_prime(i) == 1)
		{
			largest_prime = i;
		}
	}
	printf("%d", largest_prime);
	return (0);
}

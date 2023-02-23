#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - finds the largest prime factor of a number
 * @n: number to find the largest prime factor of
 * description: finds the largest prime factor of a number
 * Return: largest prime factor of n
 */

/* _sqrt: function to calculate square root of number*/
double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/* function to find the largest prime factor of a number n given*/

int largest_prime_factor(long n)
{
	long i, max = -1;

	/*divide the number by 2 as many times as possible*/
	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	/*now n is odd, so we can skip one element (Note i = i +2)*/
	for (i = 3; i <= _sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}

	/**
	* This condition is to handle the case when n is a prime number
	* greater than 2
	*/
	if (n > 2)
		max = n;

	return (max);
}

/**
 * main - finds the largest prime factor of a number
 * description: finds the largest prime factor of a number
 * Return: 0
 */

int main(void)
{
	long n = 600851475143;

	printf("%d", largest_prime_factor(n));
	return (0);
}

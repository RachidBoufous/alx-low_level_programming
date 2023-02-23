#include <stdio.h>

/**
 * largest_prime_factor - finds the largest prime factor of a number
 * @n: number to find the largest prime factor of
 * description: finds the largest prime factor of a number
 * Return: void
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

void largest_prime_factor(long int num)
{
	int prmNu, largest;

	/* first divide with the smallest prime number (two) */
	while (num % 2 == 0)
		num = num / 2;

	/* num must be odd so we proceed to the next prime number (plus two) */
	for (prmNu = 3; prmNu <= _sqrt(num); prmNu += 2)
	{
		while (num % prmNu == 0)
		{
			num = num / prmNu;
			largest = prmNu;
		}
	}


	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}


/**
 * main - finds the largest prime factor of a number
 * description: finds the largest prime factor of a number
 * Return: 0
 */

int main(void)
{
	long n = 600851475143;

	largest_prime_factor(n);
	return (0);
}

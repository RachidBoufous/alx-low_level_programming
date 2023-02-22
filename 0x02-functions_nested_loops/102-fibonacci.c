#include <stdio.h>
#include <unistd.h>

/*
* main - entry point
* Description: Prints the first 50 numbers in the Fibonacci sequence
* Return: 0
*/


int main() {
	int count, fib1 = 0, fib2 = 1, sum;

	//Prints the first 50 numbers in the Fibonacci sequence
	for (count = 0; count < 50; ++count)
	{
		sum = fib1 + fib2;
		printf("%d", sum);

		fib1 = fib2;
		fib2 = sum;

		printf(", ");
	}
   return 0;
}

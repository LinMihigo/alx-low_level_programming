#include "main.h"

int prime_checker(int n, int x);

/**
* is_prime_number - says  if an integer is a prime or not
* @n: num to evaluate
* Return: 1
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_checker(n, n - 1));
}

/**
* prime_checker - Calculate if a number is prime recursively
* @n: num to evaluate
* @i: iterator
* Return: 1 if n is prime, 0 otherwise
*/
int prime_checker(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime_checker(n, i - 1));
}

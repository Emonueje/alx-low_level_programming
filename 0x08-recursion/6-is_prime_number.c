#include "main.h"

/**
 * getprime - gets the prime number
 * @num: input
 * @tmp: input
 * Return: an int, 1 if prime and 0 if not
 */
int getprime(int num, int tmp)
{
	if (num <= 1)
		return (0);
	if (num == tmp)
		return (1);
	else 
		if (num % tmp == 0)
			return (0);
	return (getprime(num, tmp + 1));
}

/**
 * is_prime_number - checks if prime number
 * @n: input
 * Return: 1 if prime and 0 if not
 */
int is_prime_number(int n)
{
	return (getprime(n, 2));
}

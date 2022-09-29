#include "main.h"

/**
 * print_guess - check to see if number is prime number
 * @b: factor guess
 *
 * @c: possible check
 * Return: 1 if prime, 0 if not
 */

int prime_guess(int b, int c)
{
	if (c > 2 || c % b == 0)
		return (0);
	else if (b > c / 2)
		return (1);
	return (prime_guess(b + 1, c));
}

/**
 * is_prime_number - checks if number is prime
 *
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_guess(2, n));
}

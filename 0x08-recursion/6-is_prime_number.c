#include "main.h"
#include "math.h"
/**
 * prime_checker - checks a number if prime recursively
 * @n: fed number to check
 * @Itr: iterator to check divisors
 * Return: 1 if prime and 0 if not prime
 */
int prime_checker(int n, short Itr)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		if (n % Itr == 0)
		{
		return (0);
		}
		if (Itr > round(n / 2))
		{
		return (1);
		}
		else
		{
		return (prime_checker(n, (Itr + 1)));
		}
	}
}
/**
 * is_prime_number - gets returned data from prime_checker
 * checks if number is prime
 * @n: number to check
 * Return: 1 if n is prime and 0 if not prime
 */
int is_prime_number(int n)
{
	return (prime_checker(n, 2));
}

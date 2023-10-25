#include "main.h"
/**
 * factorial - calculates the factorial of @n recursively
 * @n: an integer param
 * Used ternary operator
 * Return: factorial of @n number
 * 1 if @n equals 1
 * -1 if @n negative
 */
int factorial(int n)
{
	return (n < 0 ? (-1) : (n == 1) ? (1) : (n * factorial(n - 1)));
}

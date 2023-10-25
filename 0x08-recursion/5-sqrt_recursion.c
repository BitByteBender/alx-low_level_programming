#include "main.h"
/**
 * _Iterator - calculates the square root recursively
 * @nHolder: used to match @ITr calc
 * @Itr: used for guessing
 * Used ternary operator
 * Return: square root of a @nHolder
 * -1 if no natural sqrt found
 */
int _Iterator(int nHolder, int Itr)
{
	return ((Itr * Itr) > nHolder ?
		(-1) : (Itr * Itr) == nHolder ?
		Itr : _Iterator(nHolder, (Itr + 1)));
}
/**
 * _sqrt_recursion - calculates the square root of @n recursively
 * @n: an integer param
 * Return: a square root of a number once found, or -1 if doesn't exist
 */
int _sqrt_recursion(int n)
{
	return (_Iterator(n, 1));
}

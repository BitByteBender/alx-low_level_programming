#include "main.h"
/**
 * _pow_recursion - calculates the power of base:@x to exponent:@y
 * @x: the base
 * @y: the exponent/power
 * Used ternary operator
 * Return: powered value of @x->base to @y->exponent
 * 1 if @y equals 0
 * -1 if @y negative
 */
int _pow_recursion(int x, int y)
{
	return ((y < 0) ? (-1) : (y == 0) ? (1) : (x * _pow_recursion(x, (y - 1))));
}

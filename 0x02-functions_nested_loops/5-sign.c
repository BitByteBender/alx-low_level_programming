#include "main.h"
/**
 * print_sign - takes an integer param
 * @n: is an integer param
 *
 * checks if the value is either 1, 0 or -1
 * if 1 return + 1
 * else if 0 return 0 0
 * else return - -1
 *
 * Return: Greater than 0 return + 1
 * Equal 0 return 0 0
 * Less than 0 return - -1
 */
int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n == 0)
{
	_putchar('0');
	return (0);
}
else
{
	_putchar('-');
	return (-1);
}
}

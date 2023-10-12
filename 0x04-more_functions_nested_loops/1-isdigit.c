#include "main.h"
/**
 * _isdigit - takes an integer param
 * @c: is an integer param
 *
 * checks if the entered value is a digit  or not
 * if digit returns 1
 * else returns 0
 *
 * Return: 0 for not a digit
 * Or: 1 for a digit
 */
int _isdigit(int c)
{
	return (c >= 48 && c <= 57 ? 1 : 0);
}

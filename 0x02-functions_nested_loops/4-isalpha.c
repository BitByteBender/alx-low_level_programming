#include "main.h"
/**
 * _isalpha - takes an integer param
 * @c: is an integer param
 *
 * checks if the entered value is either lowercase or uppercase
 * if lowercase or uppercase returns 1
 * else returns 0
 *
 * Return: 1 if value is lowercase or uppercase
 * Or: 0 if value is not lowercase
 */
int _isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 127) ? 1 : 0);
}

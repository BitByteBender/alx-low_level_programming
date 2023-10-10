#include "main.h"
/**
 * _islower - takes an integer param
 * @c: is an integer param
 *
 * checks if the entered value is lowercase or not
 * if lowercase returns 1
 * else returns 0
 *
 * Return: 1 if value is lowercase
 * Or: 0 if value is not lowercase
 */
int _islower(int c)
{
	return (c >= 97 && c <= 127 ? 1 : 0);
}

#include "main.h"
/**
 * _isupper - takes an integer param
 * @c: is an integer param
 *
 * checks if the entered value is lowercase or not
 * if uppercase returns 1
 * else returns 0
 *
 * Return: 0 if value is lowercase
 * Or: 1 if value is uppercase
 */
int _isupper(int c)
{
	/*return (c >= 97 && c <= 127 ? 0 : 1);*/
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}

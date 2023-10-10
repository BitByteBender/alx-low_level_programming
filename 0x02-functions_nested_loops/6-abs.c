#include "main.h"
/**
 * _abs - takes an integer param
 * @Num: is an integer param
 *
 * checks the value if negative or positive
 * if negative multiply to make it abs
 * else return the value as it is
 *
 * Return: Absolute value
 */
int _abs(int Num)
{	
	return ((Num < 0) ? Num * (-1) : Num);
}

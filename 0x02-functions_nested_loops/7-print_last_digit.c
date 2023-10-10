#include "6-abs.c"
#include "main.h"
/**
 * print_last_digit - takes an integer param
 * @Num: is an integer param
 *
 * GetLastDigit: Gets last value and switch it to abs
 *
 * Called _abs function
 * Called _putchar function
 * Return: Last Absolute Digit
 */
int print_last_digit(int Num)
{
	int GetLastDigit = _abs(Num % 10);

	return (_putchar('0' + GetLastDigit));
}

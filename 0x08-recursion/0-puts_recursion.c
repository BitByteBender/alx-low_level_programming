#include "main.h"
#include <string.h>
/**
 * _puts_recursion - prints a string(array of chars) using recursion
 * @s: pointer to a string
 * if null byte prints a new line
 * else print first character in the pointed string by @s
 * and shift to next char in that pointed string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	}
	else
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
}

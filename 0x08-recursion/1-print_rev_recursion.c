#include "main.h"
/**
 * _print_rev_recursion - prints a string(array of chars) backwards
 * @s: pointer to a string
 * if not null byte continue recursion
 * pop each _print_rev_recursion func from top call stack
 * print chars in reverse at the end of call stack/hierarchy
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}

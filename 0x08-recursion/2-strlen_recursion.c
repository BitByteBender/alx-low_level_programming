#include "main.h"
/**
 * _strlen_recursion - Calculates the length of a string recursively
 * @s: pointer to a string
 * Return: length of a string(array of chars)
 */
int _strlen_recursion(char *s)
{

	return (*s == '\0' ? 0 : (int)(1 + _strlen_recursion(s + 1)));
}

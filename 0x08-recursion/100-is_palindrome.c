#include "main.h"
#include <string.h>
/**
 * palindrome_checker - checks if a string is a palindrom recursively
 * @s: string(array of chars) to be checked
 * @ItrForward: start of index
 * @ItrBackward: end of index
 * Return: 1 if string is palindrome or 0 if not
 */

int palindrome_checker(char *s, short ItrForward, short ItrBackward)
{
	if (*s == '\0')
	{
		return (0);
	}

	if (ItrForward >= ItrBackward)
	{
		return (1);
	}
	else
	{
		if (s[ItrForward] == s[ItrBackward])
		{
		return (palindrome_checker(s, (ItrForward + 1), (ItrBackward - 1)));
		}
		else
		{
		return (0);
		}
	}
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to be checked
 * strlen(): to calculate the length of a string
 * Return: 1 if string is palindrome or 0 if not
 */
int is_palindrome(char *s)
{
	short length = strlen(s);

	return (length <= 1 ? 1 : palindrome_checker(s, 0, (length - 1)));
}

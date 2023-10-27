#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
 * _isDigit - takes an integer param
 * @c: is an integer param
 * Checks if the entered value is a digit or not
 * if digit return 1 else 0
 *
 * Return: 0 for not a digit or 1 if it's a digit
 */
int _isDigit(int c)
{
	return ((c >= 48 && c <= 57) ? 1 : 0);
}
/**
 * checkDigits - checks if a string contains just digits
 * @Arg: string to be scanned/checked
 *
 * Return: 1 if string contains only digits
 * 0 if it doesn't contain digits
 */
bool checkDigits(const char *Arg)
{
	while (*Arg)
	{
		if (!_isDigit(*Arg))
		{
			return (0);
		}
	Arg++;
	}
	return (1);
}
/**
 * main - Entry point takes two args
 * @argc: intger argument count
 * @argv: argument value (array of chars pointers)
 * Iterates from index 1 then calculate till max count
 * Stored calculation inside Result
 * used atol() to convert argument at current index to int
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	unsigned short i;
	long int Result = 0;

	for (i = 1; i < argc; i++)
	{
		if (!checkDigits(argv[i]))
		{
			puts("Error");
			return (1);
		}
		Result += atol(argv[i]);
	}


	printf("%ld\n", Result);
	return (0);
}

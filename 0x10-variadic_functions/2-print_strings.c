#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints @n strings args using a separator in between
 * @n: number of args that will get fed
 * @separator: a string(char pointer) to separate @n args
 * var Holder: string to be printed
 * check if @separator is NULL or not
 * if not NULL prints @n args followed by @separator
 * while i(counter) is less than (@n - 1) and once i < n print a new line
 * Checks if string is NULL or not
 * if NULL prints nil otherwise print the whole string
 * otherwise print @n args without @separator and end the full print using
 * new line
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *Holder;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	Holder = va_arg(args, char *);

	(Holder == NULL ? printf("(nil)") : printf("%s", Holder));

	if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}

	va_end(args);

	putchar('\n');
}

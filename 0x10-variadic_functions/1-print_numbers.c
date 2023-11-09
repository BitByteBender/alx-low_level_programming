#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints @n integer args using a separator in between
 * @n: number of args that will get fed
 * @separator: a string(char pointer) to separate @n args
 * check if @separator is NULL or not
 * if not NULL prints @n args followed by @separator
 * while i(counter) is less than (@n - 1) and once i < n print a new line
 * otherwise print @n args without @separator and end the full print using
 * new line
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int Holder = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return;
	}

	for (i = 0; i < n; i++)
	{
	Holder = va_arg(args, int);

	if (separator != NULL)
		(i != (n - 1) ? printf("%d%s", Holder, separator) : printf("%d", Holder));
	else
		printf("%d", Holder);
	}
	putchar('\n');
	va_end(args);
}

#include "main.h"
/**
 * print_chars - Has no parameters
 *
 * Prints multiple _putchar() functions
 */
void print_chars(void)
{
	const char *Text = "_putchar";
	unsigned short i;
	for (i = 0; i<=7; i++)
	{
	_putchar(Text[i]);
	}
	_putchar('\n');
}

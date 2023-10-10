#include "main.h"
/**
 * print_alphabet - takes no parameters
 *
 * loops from 97 to 122 which is a to z(ASCII)
 *
 * new line at the end
 */
void print_alphabet(void)
{
	unsigned short i;
for (i = 97; i <= 122; i++)
{
	_putchar(i);
}
	_putchar('\n');
}

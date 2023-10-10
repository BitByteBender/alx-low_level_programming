#include "main.h"
/**
 * print_alphabet_x10 - takes no parameters
 *
 * First loop: loops 10 times then prints a new line
 * Second loop: loops from 97 to 122 which is a to z(ASCII)
 *
 */
void print_alphabet_x10(void)
{

unsigned short i;
for (i = 1; i <= 10; i++)
{

unsigned short j;
for (j = 97; j <= 122; j++)
{
	_putchar(j);
}
	_putchar('\n');
}
}

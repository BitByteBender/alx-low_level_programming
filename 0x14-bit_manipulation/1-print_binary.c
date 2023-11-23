#include "main.h"
#include <string.h>
/**
 * print_binary - prints the conversion from decimal to binary
 * @n: decimal value to get converted
 */
void print_binary(unsigned long int n)
{
	short i = (sizeof(unsigned long int) * 8) - 1;
	unsigned int valHolder = 0;

	while (i >= 0)
	{
		if (n & _pow(2, i))
		{
			_putchar('1');
			valHolder = 1;
			n &= ~(_pow(2, i));
		}
		else if (valHolder != 0 || i == 0)
			_putchar('0');
	i--;
	}
}

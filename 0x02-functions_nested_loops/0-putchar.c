#include "main.h"
/**
 * main - Entry point
 *
 * Prints multiple _putchar() functions
 * Return: Always 0 (Success)
 */
int main(void)
{
const char *Text = "_putchar";
unsigned short i;
for (i = 0; i <= 7; i++)
{
_putchar(Text[i]);
}
_putchar('\n');
	return (0);
}

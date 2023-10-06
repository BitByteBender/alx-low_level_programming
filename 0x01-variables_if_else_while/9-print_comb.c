#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
short i = 48;
while (i < 58)
{
if (i != 58)
{
putchar(i);
if (i < 57)
{
putchar(',');
putchar(' ');
}
i++;
}
else
{
break;
}
}
putchar('\n');
return (0);
}

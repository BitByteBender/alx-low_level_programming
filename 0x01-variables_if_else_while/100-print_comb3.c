#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
short i = 48;
while (i < 57)
{
short j = 49;
while (j < 58)
{

if (i != 58)
{
putchar(i);
putchar(j);

if (i < 57 && j < 57)
{
putchar(',');
putchar(' ');
}

j++;
}
else
{
break;
}
}

i++;
}

putchar('\n');
return (0);
}
